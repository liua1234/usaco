/*
ID: liu_a123
PROG: barn1
LANG: C++
*/


#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int i,j,k,n,m,acow,m2,wood,tmp;
bool a[200+50];
int b[200+50];
int main()
{
	freopen("barn1.in","r",stdin);
	freopen("barn1.out","w",stdout);
	cin>>n;
	cin>>m;
	cin>>acow;
	for(i=0;i<acow;i++)
	{
		cin>>tmp;
		a[tmp]=true;
	}
	i=0;
	for(;;)
	{
		if(a[i])
		{
			wood++;
			j=0;
			m2++;
			for(;;)
			{
				i++;
				i+=j;
				j=0;
				if(a[i]!=true)
				{
					j=i;
					for(;;)
					{
						j++;
						if(a[j])
						{	
							j-=i;
							b[k]=j;
							k++;
							wood++;
							break;
						}
						if(j>=m)
						{
							break;
						}
					}
				}
				if(j>=m)
				{
					break;
				}
				m2++;
				
				if(i>=m)
				{
					break;
				}
			}
		}
		i++;
		if(j>=m)
		{
			break;
		}
		if(i>=m)
		{
			break;
		}
	}
	if(wood<=n)
	{
		cout<<m2<<endl;
		return 0;
	}
	i=0;
	sort(b,b+k);
	for(;;)
	{
		m2+=b[i];
		i++;
		wood--;
		if(wood<=n)
		{
			cout<<m2<<endl;
			return 0;
		}
	}
}
