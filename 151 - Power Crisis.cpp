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
list <int > V;
int N;
int sim(int m)
{
    list <int > L (V);
    while(L.size()>1)
    {
        L.pop_front();
        for(int i=1;i<m;i++)
        {
            L.push_back(L.front());
            L.pop_front();
        }
    }
    return L.front();
}
int main()
{
    int i,m,j,k,x,y;
    while(scanf("%d",&N)==1 && N)
    {
        V.clear();
        for(i=1;i<=N;i++)
        {
            V.push_back(i);
        }
        for(m=1; 1 ; m++)
        {
            x=sim(m);
            if(x==13)
                break;
        }
        printf("%d\n",m);
    }



	return 0;
}
