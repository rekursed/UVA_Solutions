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

int main()
{
    int i,j,k,n,kase,a,b;
    while(scanf("%d",&kase)==1)
    {
        for(k=1;k<=kase;k++)
        {
            scanf("%d",&n);
            int m=0;
            while(n--)
            {
                scanf("%d",&a);
                m=max(a,m);
            }
            printf("Case %d: %d\n",k,m);
        }
    }



	return 0;
}
