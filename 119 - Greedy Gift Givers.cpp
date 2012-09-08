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
    string a,b,c,d,nam[20];
    int i,j,k,x,y,n,m;
    map <string , int > mp;
    bool flag=false;
    while(scanf("%d",&n)==1)
    {
        mp.clear();
        for(k=0;k<n;k++)
        {
            cin>>nam[k];
        }
        for(k=0;k<n;k++)
        {
            cin>>a>>x>>y;
            mp[a] -= x; // spent
            double tk=1.0;
            if(y!=0)
                tk = x/y;
            else
            {
                mp[a] += x;
                continue;
            }
            mp[a] += x - ((x/y) * y); // Reminder
            for( j =0 ; j < y ; j++)
            {
                cin>>b;
                mp[b]+=tk;  // Gifts Received
            }
        }
        if(flag)    cout<<endl;
        flag=true;
        for(k=0;k<n;k++)
        {
            cout<<nam[k]<<" "<<mp[nam[k]]<<endl;
        }
    }


return 0;
}
