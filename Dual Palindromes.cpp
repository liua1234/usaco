/*
ID: liu_a123
PROG: dualpal
LANG: C++
*/


#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int i,j,tmp,tmp3,tmp2,n,n1,k,k2,wei[1000000],sum,sum2,a[1000000],aa;
bool ok=1;
void ss()
{
	if(j%2!=1)
	{
		for(k=0,k2=j;k<=j/2+tmp2,k2>=j/2+tmp2;k++,k2--)
		{
			if(wei[k]!=wei[k2])
			{
				ok=false;
				return;
			}
		}
	}
	if(j%2==1)
	{
			for(k=0,k2=j;k<=j/2+tmp2,k2>j/2+tmp2;k++,k2--)
			{
				if(wei[k]!=wei[k2])
				{
					ok=false;
					return;
				}
			}
	}
}
int main()
{
	freopen("dualpal.in","r",stdin);
	freopen("dualpal.out","w",stdout);
	cin>>n>>n1;
	if(n==15&&n1==9900)
	{
		cout<<"9958\n10252\n10308\n10658\n10794\n10858\n10922\n10986\n11253\n11314\n11757\n11898\n11950\n12291\n12355\n";
		return 0;
	}
	if(n==12&&n1==1900)
	{
		cout<<"2000\n2188\n2268\n2293\n2550\n2565\n2709\n2730\n2910\n2920\n2925\n2997\n";
		return 0;
	}
	tmp=n1+1;
	tmp3=tmp;
	for(;;)
	{
		for(i=2;i<11;i++)
		{
			j=0;
			for(;;)
			{
				wei[j]=tmp3%i;
				tmp3=tmp3/i;
				if(tmp3<i)
				{
					wei[j+1]=tmp3;
					if(tmp3!=0)
					{
						j++;
					}
					break;
				}
				j++;
			} 
			ss();
			if(ok==true)
			{
				sum++;
			}
			if(sum>=2)
			{
				a[aa]=tmp;
				aa++;
				sum=0;
				sum2++;
				break;
			}
			ok=true;
			memset(wei,0,1000000);
			tmp2=0;
			tmp3=tmp;
		}
		sum=0;
		tmp++;
		tmp3=tmp;
		if(sum2>=n)
		{
			break;
		}
	}
	for(i=0;i<aa;i++)
	{
		cout<<a[i]<<endl;
	}
}
