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
	int i,j,k,n,m;
	string ask;
	string rep="report";
	string don = "donate";
    while(cin>>n)
    {
        int sum=0;
        while(n--)
        {
            cin>>ask;
            if(ask==don)
            {
                cin>>k;
                sum+=k;
            }
            else if(ask == rep)
            {
                cout<<sum<<endl;
            }

        }
    }

return 0;
}
