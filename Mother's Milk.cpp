/*
ID: liu_a123
PROG: milk3
LANG: C++11
*/



#include<cstdio>
#include<algorithm>
using namespace std;
int s[50][50][50];
int p[100];
int sb[100];
int i,j,k,l,aa,bb,cc,a,b,c,t;
void dfs(int a,int b,int c)
{
    if(s[a][b][c]==1) return;
      s[a][b][c]=1;
    if(a==0&&sb[c]==0)
    {
        sb[c]==1;
        t++;
        p[t]=c;
    }
    if(a>0&&b<bb)
    {
        int gg;
        if(bb-b>=a) gg=a;
          else gg=bb-b;
        dfs(a-gg,b+gg,c);
    }
    if(a>0&&c<cc)
    {
        int gg;
        if(cc-c>=a) gg=a;
          else gg=cc-c;
          dfs(a-gg,b,c+gg);
    }
    if(b>0&&a<aa)
    {
        int gg;
        if(aa-a>=b) gg=b;
          else gg=aa-a;
          dfs(a+gg,b-gg,c);
    }
    if(b>0&&c<cc)
    {
        int gg;
        if(cc-c>=b) gg=b;
          else gg=cc-c;
          dfs(a,b-gg,c+gg);
    }
    if(c>0&&a<aa)
    {
        int gg;
        if(aa-a>=c) gg=c;
          else gg=aa-a;
          dfs(a+gg,b,c-gg);
    }
    if(c>0&&b<bb)
    {
        int gg;
        if(bb-b>=c) gg=c;
          else gg=bb-b;
          dfs(a,b+gg,c-gg);
    }
}
int main()
{
	freopen("milk3.in","r",stdin);
	freopen("milk3.out","w",stdout);
    scanf("%d %d %d",&aa,&bb,&cc);
    dfs(0,0,cc);
    sort(p+1,p+1+t);
    for(i=1;i<=t;i++)
    {
    	if(i!=t)
    	{
			printf("%d ",p[i]);
    	}
		else
		{
			printf("%d",p[i]);
		}
    }
    printf("\n");
      
      return 0;
}
