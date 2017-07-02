/*
ID: liu_a123
PROG: palsquare
LANG: C++
*/


#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
using namespace std;
int a[100],w;
int b[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
bool change(int n,int k)
{
    int flag=1;
    while(n!=0){
        a[++w]=n%k;
        n/=k;
    }
    for(int u=1;u<=w/2+1;u++)
        if(a[u]!=a[w-u+1]){
            flag=0;break;
}
    return flag;
}
int main()
{
	freopen("palsquare.in","r",stdin);
	freopen("palsquare.out","w",stdout);
    int i,j,k,m,n;
    scanf("%d",&n);
    for(i=1;i<=300;i++)
	{ 
    	j=i*i;w=0; 
    	if(change(j,n)==1)
		{
        	w=0;
			change(i,n);
        	for(int u=w;u>=1;u--)
			{        
        		if(a[u]<10)printf("%d",a[u]);
        		else printf("%c",b[a[u]-10]);
 	   		}
        	printf(" ");
	        w=0;change(j,n);
	        for(int u=1;u<=w;u++)
			{       
		        if(a[u]<10)printf("%d",a[u]);
		        else printf("%c",b[a[u]-10]);
        	}
        printf("\n");
    }    
}
    return 0;
}
