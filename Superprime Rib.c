/*
ID: liu_a123
PROG: sprime
LANG: C++
*/




#include<iostream>
#include<cstdio>
using namespace std;
int n;
bool pd(int x)
{
    if(x==1)
        return 0;
    for(int i=2;i*i<=x;i++)
        if(x%i==0)
            return 0;
    return 1;
}
void dfs(int u,int fa)
{
    for(int i=1;i<=9;i++)
        if(pd(fa*10+i))
        {
            if(u==n)
                printf("%d\n",fa*10+i);
            else
                dfs(u+1,fa*10+i);
        }
}
int main()
{
	freopen("sprime.in","r",stdin);
	freopen("sprime.out","w",stdout);
    scanf("%d",&n);
    dfs(1,0);
    return 0;
}