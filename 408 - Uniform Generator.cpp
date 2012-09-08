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
typedef long long lint;
using namespace std;

lint gcd(ulint a,ulint b)
{
    return (b==0? a: gcd(b, a%b ) );
}
int main()
{
	//freopen("in.in","r+",stdin);
	lint x,y;
	lint n,i,j,k,p,q;
    while(cin>>x>>y)
    {
            if(gcd(x,y)==1)
            {
                printf("%10lld%10lld    %s\n\n",x,y,"Good Choice");
            }
            else
            {
                 printf("%10lld%10lld    %s\n\n",x,y,"Bad Choice");
            }
    }

return 0;
}
