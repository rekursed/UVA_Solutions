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
	long long m,x,v;
	double t,k;
    while(cin>>m>>x )
    {
        if(m==0 && x==0) break;
        if(m==1 || x==0 || x==100)
        {
            puts("Not found"); continue;
        }
        v =  (m-1) *100 / (100-x);
        if(  ( m - 1 ) * 100  % (100-x) == 0) v--;

        if(v<m)
        {
            puts("Not found"); continue;
        }
        else
        {
            cout<<v<<endl;
        }
    }

return 0;
}
