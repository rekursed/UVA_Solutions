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
	int tasty,i,j,k,n,m,a;
	char c;
	int ans;
	string inp;
	int dic[259];
	cin>> tasty;
	while(tasty--)
	{
	    memset(dic,0, sizeof dic);
	    cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>c>>a;
            dic[c+128] = a;
        }
	    cin>> n;
	    getchar();
	    ans=0;
	    for(i=0;i<n ;i++)
	    {
            getline(cin,inp);
            for(j=0 ; j< inp.size();j++)
            {
                ans += dic[ inp[j]+128 ];
            }

	    }
	    printf("%d.%02d$\n",ans/100,ans%100);
	}
    return 0;
}
