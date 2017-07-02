/*
ID: liu_a123
PROG: friday
LANG: C++
*/



#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
using namespace std;
int n,year=1900,month=1,day=1,fyear,fday,now=1,a[8];
int main()
{
	freopen("friday.in","r",stdin);
	freopen("friday.out","w",stdout);
	cin>>n;
	fyear=1900+n-1;
    while(year<=fyear)
    {
        while(month<=12)
        {
            switch(month)
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    {
                        fday=31;
                        break;
                    };
                case 4:
                case 6:
                case 9:
                case 11:
                    {
                        fday=30;
                        break;
                    };
                case 2:
                    {
                        if((year%400==0)||(year%4==0 && year%100!=0))
                        {
                            fday=29;
                        }
                        else
                        {
                            fday=28;
                        }
                        break;
                    };
            }
            while(day<=fday)
            {
                if(now==8)
                {
                    now=1;
                }
                if(day==13)
                {
                    a[now]=a[now]+1;
                }
                now++;
                day++;
            }
            day=1;
            month++;
        }
        month=1;
        year++;
    }
     printf("%d %d %d %d %d %d %d\n",a[6],a[7],a[1],a[2],a[3],a[4],a[5]);
}
