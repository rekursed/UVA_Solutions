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
set<char>::iterator it;
int main()
{
	//freopen("in.in","r+",stdin);
    int rnd,i,j,k;
    string inp,x,y;
    while(cin>>rnd)
    {
        if(rnd<0) break;
        int fail=0;
        getchar();
        getline(cin,inp);
        set<char> st(inp.begin(),inp.end());
        getline(cin,x);
        for(i=0 ; i<x.size() && !st.empty() && fail<7 ; i++)
        {
            it=st.find(x[i]);
            if( it != st.end())
            {
                st.erase(it);
            }
            else
            {
                fail++;
            }
        }
        cout<<"Round "<<rnd<<endl;
        if(fail>=7)
            cout<<"You lose."<<endl;
        else if(st.empty())
            cout<<"You win."<<endl;
        else
            cout<<"You chickened out."<<endl;
    }

return 0;
}
