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
	int p,q,res;
    while( cin>>p>>q)
    {
        if(p==-1 && q==-1) break;
        res = min(abs(p-q),abs(max(p,q)-(min(p,q)+100)));
        cout<<res<<endl;
    }

return 0;
}
