#include <set>
#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <cctype>
#include <cstdio>
#include <string>
#include <vector>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;
int dif[]={180000,300000,400000,300000};
double per[]={0,0.1,0.15,0.2};
int main()
{
	int i,j,k,m,kase;
	long long n;
	while(scanf("%d",&kase)==1)
    {
        for(j=1;j<=kase;j++)
        {
            scanf("%lld",&n);
            double tax=0;
            double in=n;
            for(i=0;i<4;i++)
            {
                if(in>=dif[i])
                {
                    tax+=dif[i]*per[i];
                    in-=dif[i];
                }
                else
                {
                    tax+=in*per[i];
                    in=0;
                    break;
                }
            }
            if(in>0)
            {
                tax+=in*0.25;
            }
            long long tx=ceil(tax);
            if(tx>0 && tx<2000) tx=2000;
            printf("Case %d: %lld\n",j,tx);
        }
    }
	return 0;
}
