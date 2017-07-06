/*
ID: liu_a123
PROG: numtri
LANG: C++11
*/




#include <iostream>
#include <cstdio>
using namespace std;
int map[1001][1001] = { 0 };
int maxi(const int &a,const int &b)
{
    if (a > b)return a;
    else return b;
}
int main()
{
	freopen("numtri.in","r",stdin);
	freopen("numtri.out","w",stdout);
    int n, iMax(0);
    scanf("%d", &n);
    for (int i(1); i <= n; ++i)
    {
        for (int a(1); a <= i; ++a)
        {
            int b;
            scanf("%d", &b);
            map[i][a] = b + maxi(map[i-1][a-1],map[i-1][a]);
            if (map[i][a] > iMax)iMax = map[i][a];
        }
    }
    cout << iMax<<endl;
    return 0;
}
