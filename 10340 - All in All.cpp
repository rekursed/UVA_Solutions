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
    string a,b;
    bool fl;
    int i,j,k;
    while(cin>>a>>b)
    {
        int pt=0,clt=0;
        for(i=0;i<b.size();i++)
        {
                if(b[i]==a[pt])
                {
                    clt++;
                    pt++;
                }
        }
        if(clt==a.size())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
return 0;
}
