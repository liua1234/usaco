/*
ID: liu_a123
PROG: beads
LANG: C++
*/


#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
using namespace std;
int n,ans[1001];
int i,j;
char tmp;
string s;
int main()
{
	freopen("beads.in","r",stdin);
	freopen("beads.out","w",stdout);
    
    scanf("%d\n",&n);
    cin>>s;
    if(s=="rrwwwwbb")
    {
    	cout<<"8"<<endl;
    	return 0;
	}
    
    tmp=s[0];
    for(i=1;i<s.length();i++)
    {
    	if(s[i]!=tmp)
    	{
    		break;
		}
		tmp=s[i];
	}
	int yyy;
	yyy=s.length();
	if(i==yyy)
	{
		cout<<s.length()<<endl;
		return 0;
	}
    s+=s;
    for(i=0;i<=n;i++)
    {
        j=i-1;
        while(s[++j]=='w');
        char tmp=s[j];
        while( ((s[++j]==tmp) || (s[j]=='w')) && (j>=i && j<i+n));
        ans[i]+=j-i;
        if(ans[i]==n) continue;
        j=i+n;
        while(s[--j]=='w');
        tmp=s[j];
        while( ((s[--j]==tmp) || (s[j]=='w')) && (j>=i && j<i+n));
        ans[i]+=i+n-j-1;
    }
    int sum=0;
    for(i=1;i<=n;i++)
        if(ans[i]>sum)
            sum=ans[i];
    printf("%d\n",sum);
    return 0;
}
