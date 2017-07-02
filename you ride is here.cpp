/*
ID: liu_a123
PROG: ride
LANG: C++
*/


#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
using namespace std;
int i,j,n,tmp;
long long sum1=1,sum2=1;
string s1,s2;
int main()
{
	freopen("ride.in","r",stdin);
	freopen("ride.out","w",stdout);
	cin>>s1>>s2;
	for(i=0;i<s1.length();i++)
	{
		sum1=sum1*(s1[i]-64);
	}
	for(i=0;i<s2.length();i++)
	{
		sum2=sum2*(s2[i]-64);
	}
	if(sum1%47==sum2%47)
	{
		cout<<"GO"<<endl;
	}
	else
	{
		cout<<"STAY"<<endl;
	}
}
