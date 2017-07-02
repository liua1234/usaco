/*
ID: liu_a123
PROG: crypt1
LANG: C++
*/


#include<cmath>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<cstring>
using namespace std;
bool flag[10];
int sum;
void read(int &x)
{
    x=0;
    char c=getchar();
    while(c<'0'||c>'9')c=getchar();
    while(c>='0'&&c<='9')
    {
        x=x*10+c-'0';
        c=getchar();
    }
}
int main()
{
	freopen("crypt1.in","r",stdin);
	freopen("crypt1.out","w",stdout);
    int n;
    read(n);
    for(int i=1;i<=n;++i)
    {
        int x;
        read(x);
        flag[x]=true;
    }
    for(register int i=1;i<=9;++i)
    {
        if(flag[i])
        {
            for(register int j=1;j<=9;++j)
            {
                if(flag[j])
                {
                    for(register int k=1;k<=9;k++)
                    {
                        if(flag[k])
                        {
                            for(register int m=1;m<=9;m++)
                            {
                                if(flag[m])
                                {
                                    for(register int n=1;n<=9;n++)
                                    {
                                        if(flag[n])
                                        {
                                            bool p=true;
                                            int s1=i*100+j*10+k,s2=m*10+n;
                                            int temp=s1*m;
                                            while(temp>0)
                                            {
                                                if(temp>999)
                                                {
                                                    p=false;
                                                    break;
                                                }
                                                int x=temp%10;
                                                if(!flag[x])
                                                {
                                                    p=false;
                                                    break;
                                                }
                                                temp/=10;
                                            }
                                            if(!p)continue;
                                            temp=s1*n;
                                            while(temp>0)
                                            {
                                                if(temp>999)
                                                {
                                                    p=false;
                                                    break;
                                                }
                                                int x=temp%10;
                                                if(!flag[x])
                                                {
                                                    p=false;
                                                    break;
                                                }
                                                temp/=10;
                                            }
                                            if(!p)continue;
                                            temp=s1*s2;
                                            while(temp>0)
                                            {
                                                if(temp>9999)
                                                {
                                                    p=false;
                                                    break;
                                                }
                                                int x=temp%10;
                                                if(!flag[x])
                                                {
                                                    p=false;
                                                    break;
                                                }
                                                temp/=10;
                                            }
                                            if(!p)continue;
                                            sum++;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}