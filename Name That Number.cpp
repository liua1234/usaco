/*
ID: liu_a123
PROG: namenum
LANG: C++11
*/

 
#include <bits/stdc++.h>
 
using namespace std;
 
#define NONE 0
#define THROUGH 1
#define MATCH 2
 
struct Hash_Arr_ch {
    char str[20];
    int flag;
};
 
FILE *in, *out;
 
void openfile() { in = fopen("namenum.in", "r"); out = fopen("namenum.out", "w+"); }
void closefile() { fclose(in); fclose(out); }
 
/** TODO VAR. */
const char key[][3] = {
    { 0, 0, 0 }, { 0, 0, 0 },
    { 'A', 'B', 'C' }, { 'D', 'E', 'F' }, { 'G', 'H', 'I' }, { 'J', 'K', 'L' },
    { 'M', 'N', 'O' }, { 'P', 'R', 'S' }, { 'T', 'U', 'V' }, { 'W', 'X', 'Y' }
};
Hash_Arr_ch words[100000];
char str[20];
char nums[20], nowstr[20];
bool active = false;
 
int ELFHash(char *str)
{
    unsigned int hash = 0;
    unsigned int x	= 0;
 
    while (*str)
    {
        hash = (hash << 4) + (*str++);
        if ((x = hash & 0xF0000000L) != 0)
        {
            hash ^= (x >> 24);
            hash &= ~x;
        }
    }
 
	return (hash & 0x7FFFFFFF) % 100000;
}
 
void make_hash(Hash_Arr_ch words[])
{
    FILE *dict = fopen("dict.txt", "r");
    while(!feof(dict))
    {
        fscanf(dict, "%s", str);
        bool flag = false;
        while(*str != '\0')
        {
            int hash_num = ELFHash(str);
 
            while(NONE != words[hash_num].flag &&
                0 != strcmp(words[hash_num].str, str))
            {
                hash_num++;
                if(hash_num == 100000) hash_num = 0;
            }
 
            if(NONE == words[hash_num].flag)
            {
                strcpy(words[hash_num].str, str);
                if(!flag) words[hash_num].flag = MATCH;
                else words[hash_num].flag = THROUGH;
            }
            else
            if(THROUGH == words[hash_num].flag && !flag)
            {
                words[hash_num].flag = MATCH;
            }
 
            str[strlen(str) - 1] = '\0';
            flag = true;
        }
    }
    fclose(dict);
}
 
int find(char *str)
{
    int hash_num = ELFHash(str);
    while(NONE != words[hash_num].flag &&
        0 != strcmp(words[hash_num].str, str))
    {
        hash_num++;
        if(hash_num == 100000) hash_num = 0;
    }
 
    return words[hash_num].flag;
}
 
void dfs(int p, const int len, const char *str, char *now)
{
    if(len == p)
    {
        int rst = find(now);
        if(MATCH == rst)
        {
            active = true;
            fprintf(out, "%s\n", now);
        }
 
        return;
    }
 
 
    int num = (str[p] - '0');
    for(int i = 0; i < 3; i++)
    {
        now[p] = key[num][i];
        now[p + 1] = '\0';
        dfs(p + 1, len, str, now);
        now[p] = '\0';
    }
}
 
int main()
{
    openfile();
    make_hash(words);
 
    fscanf(in, "%s", nums);
    memset(nowstr, 0, sizeof(nowstr));
    dfs(0, strlen(nums), nums, nowstr);
 
    if(!active) fprintf(out, "NONE\n");
 
    closefile();
    return 0;
}
