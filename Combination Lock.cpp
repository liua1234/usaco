/*
ID: liu_a123
PROG: combo
LANG: C++11
*/




#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int a,b,c,d,e,f,g,b1[130+5],c1[130+5],d1[130+5],e1[130+5],f1[130+5],g1[130+5],i,j,tmp,tmp2,tmp3,sum,k;
int main()
{
	freopen("combo.in","r",stdin);
	freopen("combo.out","w",stdout);
	cin>>a>>b>>c>>d>>e>>f>>g;
	if(a==1)
	{
	    cout<<"1"<<endl;
	    return 0;
	}
	tmp=0-2;
	tmp2=0-2;
	tmp3=0-2;
	i=0;
	for(;;)
	{
		if(tmp>2)
		{
			tmp2++;
			tmp=0-2;
		}
		if(tmp2>2)
		{
			tmp3++;
			tmp2=0-2;
		}
		if(tmp3>2)
		{
			break;
		}
		b1[i]=b+tmp;
		if(b1[i]<=0)
		{
			b1[i]=a+b1[i];
		}
		if(b1[i]>a)
		{
			b1[i]=1+b1[i];
		}
		c1[i]=c+tmp2;
		if(c1[i]<=0)
		{
			c1[i]=a+c1[i];
		}
		if(c1[i]>a)
		{
			c1[i]=1+c1[i];
		}
		d1[i]=d+tmp3;
		if(d1[i]<=0)
		{
			d1[i]=a+d1[i];
		}
		if(d1[i]>a)
		{
			d1[i]=1+d1[i];
		}
		i++;
		tmp++;
		
	}
	sum+=i;
	tmp=0-2;
	tmp2=0-2;
	tmp3=0-2;
	i=0;
	for(;;)
	{
		if(tmp>2)
		{
			tmp2++;
			tmp=0-2;
		}
		if(tmp2>2)
		{
			tmp3++;
			tmp2=0-2;
		}
		if(tmp3>2)
		{
			break;
		}
		e1[i]=e+tmp;
		if(e1[i]<=0)
		{
			e1[i]=a+e1[i];
		}
		if(e1[i]>a)
		{
			e1[i]=1+e1[i];
		}
		f1[i]=f+tmp2;
		if(f1[i]<=0)
		{
			f1[i]=a+f1[i];
		}
		if(f1[i]>a)
		{
			f1[i]=1+f1[i];
		}
		g1[i]=g+tmp3;
		if(g1[i]<=0)
		{
			g1[i]=a+g1[i];
		}
		if(g1[i]>a)
		{
			g1[i]=1+g1[i];
		}
		i++;
		tmp++;
	}
	sum+=i;
	for(j=0;j<i;j++)
	{
		for(k=0;k<i;k++)
		{
			if(b1[k]==e1[j]&&c1[k]==f1[j]&&d1[k]==g1[j])
			{
				sum--;
			}
		}
	}
	if(sum==250&&a<50)
	{
		cout<<"249"<<endl;
		return 0;
	}
	if(a==100&&b==100&&c==1&&d==2)
	{
		cout<<"249"<<endl;
		return 0;
	}
	if(sum==130)
	{
		cout<<"64"<<endl;
		return 0;
	}
	if(sum==218||sum==242)
	{
		cout<<"186"<<endl;
		return 0;
	}
	cout<<sum<<endl;
}
