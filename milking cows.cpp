/*
ID: liu_a123
PROG: milk2
LANG: C++
*/


#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int n,a[10000]={0},b[10001]={0};
void sort(int l,int r)
{
    int i=l,j=r,m1=a[(i+j)/2], m2=b[(i+j)/2];
    while(i<=j)
    {
        while(a[i]<m1||a[i]==m1&&b[i]<m2) i++;
        while(m1<a[j]||m1==a[j]&&m2<b[j]) j--;
        if(i<=j)
        {
            a[0]=a[i];
            a[i]=a[j];
            a[j]=a[0];
            b[0]=b[i];
            b[i]=b[j];
            b[j]=b[0];
            i++; j--;
        }
    }
if (i<r) sort(i,r);
if (l<j) sort(l,j);
}
int main()
{
	freopen("milk2.in","r",stdin);
	freopen("milk2.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i]>>b[i];
    sort(1,n);
    int new1=a[1],new2=b[1], maxn=b[1]-a[1], maxm=0;
    for(int i=2;i<=n;i++)
    {
        if(a[i]>new2)
        {
            maxm=max(maxm,a[i]-new2);
            new1=a[i];
            new2=b[i];
            maxn=max(maxn,new1-new2);
        }
        if(a[i]<=new2&&new2<=b[i])
        {
          maxn=max(maxn,b[i]-new1);
          new2=b[i];
        } 
    }
cout<<maxn<<' '<<maxm<<endl;
return 0;
}
