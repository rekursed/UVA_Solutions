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

int a[10000],b[10000];
int main()
{
	//freopen("in.in","r+",stdin);
	int tasty,n,i,j,k;
    cin>>tasty;
    while(tasty--)
    {
        cin>>n;
        memset(b,0,sizeof b);
        memset(a,0,sizeof a);
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<n;i++)
        {
            for(j=i-1;j>=0;j--)
            {
                if(a[j]<=a[i])
                {
                    b[i]++;
                }
            }
        }
        int sum=0;
        for(i=1;i<n;i++)
        {
            sum+=b[i];
        }
        cout<<sum<<endl;
    }

return 0;
}
