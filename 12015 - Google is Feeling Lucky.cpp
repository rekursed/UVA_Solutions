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
#include <limits>

using namespace std;

int main()
{
    int i,j,k,n,m;
	while(scanf("%d",&n)==1)
    {
        for(k=1;k<=n;k++)
        {
            //map<string, int> site;
            vector<pair<string , int> > site;
            vector<pair<string , int> > :: iterator it;
            string a;
            int mx=0;
            for(i=0;i<10;i++)
            {
                cin>>a>>m;
                site.push_back(make_pair(a,m));
                mx=max(mx,m);
            }
            printf("Case #%d:\n",k);
            for(it=site.begin();it!=site.end();it++)
            {
                if((*it).second==mx)
                    cout<<(*it).first<<endl;
            }
        }
    }

	return 0;
}

