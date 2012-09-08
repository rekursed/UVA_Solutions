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
    int T,x,d,y;
    while(cin>>T && T)
    {
        x=y= ceil(sqrt(T));
        int d =(x&1?1: -1)*( T - ((x-1)*(x-1)+x));
        x-= (d>0? d:0);
        y+= (d<0 ? d:0);
        cout<<x<<" "<<y<<endl;

    }


return 0;
}
