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
typedef long long lint;
lint gcd(lint a,lint b)
{
    return (b==0? a: gcd(b, a%b ) );
}
int main()
{
	//freopen("in.in","r+",stdin);
	lint n,ar[1000],i,j,k;
	while(cin>>n && n)
    {
        lint m=0,p=0;
        for(i=0;i<n;i++)
            cin>>ar[i];
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                p++;
                if(gcd(ar[i],ar[j])==1)
                    m++;
            }
        }
        if(m==0)
        {
            puts("No estimate for this data set.");
            continue;
        }
        double ans = sqrt((double) p / (double) m * 6.0);
        printf("%.6lf\n",ans);

    }
return 0;
}
