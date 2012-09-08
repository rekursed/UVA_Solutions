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
typedef unsigned long ulint;
using namespace std;
ulint BtoD(string x)
{
    ulint ans=0;
    int i=x.size(),j;
    for( j=0;j<x.size();j++)
    {
        ans+=  ((x[j]- '0')* (1<<--i));
    }
    return ans;
}
ulint gcd(ulint a,ulint b)
{
    return (b==0? a: gcd(b, a%b ) );
}
int main()
{
	//freopen("in.in","r+",stdin);
	string x,y;
	ulint n,i,j,k,p,q;
    while(cin>>n)
    {
        for(k=1;k<=n;k++)
        {
            cin>>x>>y;
            p=BtoD(x);      q=BtoD(y);
            //cout<<p<<"\t"<<q<<endl;
            cout<<"Pair #"<<k<<": ";
            if(gcd(p,q)==1)
            {
                puts("Love is not all you need!");
            }
            else
            {
                 puts("All you need is love!");
            }
        }
    }

return 0;
}
