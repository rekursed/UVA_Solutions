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
vector<int> L;
int LIS(vector<int> &x)
{
    int i,j,mx=1,n = x.size();
    L.resize(n+1);
    L[0]=1;
    for(i=1;i<n;i++)
    {
        L[i]=1;
        for(j=0; j <i ; j++)
        {
            if(x[j]<x[i])
            {
                if( L[i]<(1+L[j]))
                {
                    L[i]=1+L[j];
                }
            }
            mx=max(mx,L[i]);
        }
    }
    return mx;
}

int main()
{
	//freopen("in.in","r+",stdin);
	int n,i,j,kase=1,m=0,a,b;
	vector<int> x;
    while(cin>>n)
    {
        if(n!=-1)
        {
            x.push_back(n);
        }
        else
        {
            if(x.size()==0) continue;
            if(m!=0)
            {
                cout<<endl;
            }
            m=1;
            reverse(x.begin(),x.end());
            printf("Test #%d:\n  maximum possible interceptions: ",kase++);
            cout<<LIS(x)<<endl;
            /*for( int i=0;i<x.size(); i++)
            {
                cout<<x[i]<<"->";
                cout<<L[i]<< "   ";
            }*/
            x.clear();
        }
    }

return 0;
}
