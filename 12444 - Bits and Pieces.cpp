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

pair<Lint, Lint> SearchParty(int C, int D)
{
    Lint A=0,B=0;
    bool foundFirst=0;
    int C_bit,D_bit;
    for(int i=31;i>=0;i--)
    {
        C_bit= C&(1<<i);
        D_bit = D&(1<<i);
        if(C_bit)
        {
            A|=(1<<i);
            B|=(1<<i);
        }
        else if(D_bit)
        {
            if(foundFirst)
            {
                A|=(1<<i);
            }
            else
            {
                B|=(1<<i);
                foundFirst=true;
            }
        }
    }

    if((A&B)==C && (A|B) ==D)
    {
        return(make_pair(A,B));
    }
    else
    {
        return(make_pair(-1,-1));
    }
}

int main()
{
	//freopen("in.txt","r+",stdin);
	int c,d,a,b,n;
	cin>>n;
	while(n--)
    {
        cin>>c>>d;
        pair<Lint,Lint> ans= SearchParty(c,d);
        if(ans.first!=-1)
            cout<<ans.first<<" "<<ans.second<<endl;
        else
            cout<<"-1"<<endl;
    }


return 0;
}
