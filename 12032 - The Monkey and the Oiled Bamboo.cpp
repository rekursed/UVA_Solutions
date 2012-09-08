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
#include <climits>

using namespace std;

int main()
{
	int n,m,i,j,k,kase,a[100099];
	a[0]=0;
	while(scanf("%d",&kase)==1)
    {
        for(k=1;k<=kase;k++)
        {
            m= 0;
            scanf("%d",&n);
            for(i=1;i<=n ; i++)
            {
                scanf("%d",&a[i]);
                m= a[i] - a[i-1]>m ? a[i]-a[i-1] : m ;
            }
            int res = m;
            for ( i = 1 ; i <=n ;i++)
            {
                int diff= a[i] - a[i-1];
                if(diff == m) m--;
                else    if(diff > m)
                    {
                        res++;
                        break;
                    }
            }
            printf("Case %d: %d\n",k,res);
        }

    }


	return 0;
}
