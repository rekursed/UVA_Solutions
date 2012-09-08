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

#define MX (1<<29)
using namespace std;

int main()
{
	//freopen("in.in","r+",stdin);
    double lst[10000],avg,sum,exc,diff,neg,pos;
    int x,n,i,j,k;
    while(cin>>n && n)
    {
        sum=0.0;
        for(i=0;i<n;i++)
        {
            cin>>lst[i];
            sum+=lst[i];
        }
        avg= sum/(double)n;
        //cout<<avg<<endl;
        neg=pos=diff=exc=0.0;
        for(i=0;i<n;i++)
        {
            diff = (double) (long) ( ( lst[i]- avg)*100) / 100.0;
            if( diff <0)
                neg +=diff;
            else
                pos+=diff;
        }
        exc = (-neg>pos? -neg : pos);
        printf("$%.2lf\n",exc);
    }

return 0;
}
