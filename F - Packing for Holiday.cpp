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
    int a,b,c,i,j,k,n;
    while(scanf("%d",&n)==1)
    {
        for(k=1;k<=n;k++)
        {
            scanf("%d %d %d",&a,&b,&c);
            if(a>20 || b>20 || c>20 )
            {
                printf("Case %d: bad\n",k);
            }
            else
            {
                printf("Case %d: good\n",k);
            }
        }
    }



	return 0;
}
