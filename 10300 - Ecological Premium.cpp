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
typedef long long Lint;
int main()
{
	//freopen("in.in","r+",stdin);
	Lint i,j,k,n,m,a,b,c;
    while(cin>>n)
    {
        while(n--)
        {
           cin>>m;
           Lint sum=0;
           while(m--)
           {

                cin>>a>>b>>c;
                sum+=(a*c);
           }
           cout<<sum<<endl;
        }
    }

return 0;
}
