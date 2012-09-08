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
int toInt(string x)
{
    int a;
    stringstream ss(x);
    ss>> a;
    return a;
}
int main()
{
	//freopen("in.in","r+",stdin);
	int i,j,k,n,m;
	string str,num,ans;
	char t;

	while(cin>>n)
    {
        getchar();
        for(k=1;k<=n;k++)
        {
            ans.clear();
            num.clear();
            getline(cin,str);
            m=0;
            for(i=0; i<str.size();i++)
            {
                if(isdigit( str[i]))
                {
                    if(isalpha(str[i-1])) t=str[i-1];
                    num+=str[i];
                }
                else
                {
                    m=toInt(num);
                    for(j=0;j<m;j++)
                    {
                        ans+=t;
                    }
                    num.clear();
                    m=0;
                }
            }
            if(!num.empty())
            {
                 m=toInt(num);
                    for(j=0;j<m;j++)
                    {
                        ans+=t;
                    }
                    num.clear();
                    m=0;
            }
            cout<<"Case "<<k<<": "<<ans<<endl;
        }
    }

return 0;
}
