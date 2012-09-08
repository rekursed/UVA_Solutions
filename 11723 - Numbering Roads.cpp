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
        int R,D,i,j,k,kase=1;
        while(scanf("%d %d",&R,&D)==2 && R && D)
        {
            if(R>D*27)
            {
                printf("Case %d: impossible\n",kase++);
                continue;
            }
            i=1;
            while(R>D*i)
            {
                i++;
            }
            printf("Case %d: %d\n",kase++,i-1);

        }


	return 0;
}
