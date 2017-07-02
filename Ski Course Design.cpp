/*
ID: liu_a123
PROG: skidesign
LANG: C++11
*/
#include <bits/stdc++.h>
using namespace std;
int i,n,j,tmp1,tmp2,tmp3,a[1000+5],tmp4,tmp5,sum,k,m,tmp6,mini=9999999;
int main()
{	freopen("skidesign.in","r",stdin);
	freopen("skidesign.out","w",stdout);
	cin>>n;
	for(i=0;i<n;i++)	cin>>a[i];
	for (i=0;i<84;i++)
        tmp2=0;
        for (j=0;j<n;j++)
            if (a[j]<i)
                tmp2+=(i-a[j])*(i-a[j]);
            if (a[j]>i+17)
                tmp2+=(a[j]-(i+17))*(a[j]-(i+17)); 
        if (tmp2<mini) mini=tmp2;
	cout<<mini<<endl;
	return 0;
}
