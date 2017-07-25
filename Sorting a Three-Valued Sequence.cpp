/*
ID: liu_a123
PROG: sort3
LANG: C++11
*/

 
#include <bits/stdc++.h>
using namespace std;
int i,j,n,sum,tmp,num[1000+50];
int main()
{
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		if(num[i]==1)
		{
			for(j=0;j<i;j++)
			{
				if(num[j]>num[i])
				{
					sum++;
					tmp=num[j];
					num[j]=num[i];
					num[i]=tmp;
					break;
				}
			}
		}
	}
	for(i=n-1;i>=0;i--)
	{
		if(num[i]==2)
		{
			for(j=0;j<i;j++)
			{
				if(num[j]>num[i])
				{
					sum++;
					tmp=num[j];
					num[j]=num[i];
					num[i]=tmp;
					break;
				}
			}
		}
	}
	printf("%d",sum);
	return 0;
}
