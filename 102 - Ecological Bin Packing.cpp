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

#define INT_MAX 2147483647
using namespace std;
int bottles[12];
int countit(int x,int y,int z)
{
    int m=0;
    for(int i = 0 ;i<9;i++)
    {
        if(i != x && i!=y && i!=z)
            m+=bottles[i];
    }
    return m;
}

int main()
{
    int i,a[100];
    string combination [6]= {"BCG","BGC","CBG","CGB","GBC","GCB"};

    while(cin>>bottles[0])
    {
        for(i=1;i<9;i++)
            cin>>bottles[i];
        string ans;
        int mini= INT_MAX;
        a[0] = countit(0,5,7);
        a[1]=countit (0,4,8);
        a [2]=countit(2,3,7);
        a [3]=countit(2,4,6);
        a [4]=countit(1,3,8);
        a [5]=countit(1,5,6);
        for(i=0;i<6;i++)
        {
            if(a[i]<mini)
            {
                mini=a[i];
                ans=combination[i];
            }
        }
        cout<<ans<<" "<<mini<<endl;
    }
return 0;
}
