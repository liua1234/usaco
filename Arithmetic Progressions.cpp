/*
ID: liu_a123
PROG: ariprog
LANG: C++
*/


#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<algorithm>
using namespace std;
int ans[1000100],f[1000000];
int main(){
	freopen("ariprog.in","r",stdin);
	freopen("ariprog.out","w",stdout);
    int n,m,p,q,i,l=0,j,k,d1=0;
    scanf("%d%d",&n,&m);
    for(p=0;p<=m;p++)
        for(q=p;q<=m;q++){
            ans[p*p+q*q]=1;
        }
        l=0;
    for(i=0;i<=m*m+m*m;i++) {
        l+=ans[i];
        if(ans[i]){f[l]=i;}
    }
    for(j=1;j<=m*m*2/(n-1);j++){
        for(i=1;i<=l;i++){
            if(f[i]+j*(n-1)>m*m*2)break;
            int c=1,d=f[i];
            for(k=1;k<=n-1;k++){
                d=d+j;
                if(!ans[d]){
                    c=0;
                    break;
                }
            }
            if(c){d1=1;printf("%d %d\n",f[i],j);}
        }
    }
    if(d1==0)printf("NONE\n");
    return 0;
}
