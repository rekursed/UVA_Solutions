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
	int tasty,i,j,n,k;
	string fld;
    while(cin>>tasty)
    {
        for(k=1;k<=tasty;k++)
        {
            cin>>n;
            int crow=0;
            getchar();
            getline(cin,fld);
            for(i=0;i<n;i++)
            {
                if(fld[i]=='.')
                {
                    crow++;
                    i+=2;
                }
            }
            cout<<"Case "<<k<<": "<<crow<<endl;
        }
    }


return 0;
}
