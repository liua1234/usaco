/*
ID: liu_a123
PROG: milk
LANG: C++
*/


#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int a,b,sum,price[5000+50],sl[2000000+50],i,tmp2,j,tmp;
int main()
{
	freopen("milk.in","r",stdin);
	freopen("milk.out","w",stdout);
	cin>>a>>b;
	for(i=0;i<b;i++)
	{
		cin>>price[i];
		cin>>tmp2; 
		sl[price[i]]+=tmp2; 
	}
	sort(price,price+b);
	j=0;
	for(;;)  
	{
		if(tmp>=a)
		{
			break;
		}
		if(sl[price[j]]==0)
		{
			j++;
			continue;
		} 
		sum+=price[j];
		tmp++;
		sl[price[j]]--;
	}
	cout<<sum<<endl;
}
