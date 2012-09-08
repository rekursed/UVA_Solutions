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
    vector<int> a,b;
    int n,i;
    while(cin>>n)
    {
        bool flag =true;
        a.clear(); b.clear();
        a.resize(n);
        b.resize(n-1);
        for(i=0;i<n;i++)
            cin>>a[i];
        if(n==1)
        {
            cout<<"Jolly"<<endl; continue;
        }
        for(i=0;i<n-1;i++)
        {
            b[i]=abs(a[i]-a[i+1]);
        }
        sort(b.begin(),b.end());
        for(i=0;i<n-1;i++)
        {
            if(b[i]!=i+1)
            {
                flag =false; break;
            }

        }
        if(!flag) puts("Not jolly");
        else
            puts("Jolly");
    }

return 0;
}
