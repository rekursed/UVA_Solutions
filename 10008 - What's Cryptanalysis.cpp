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
typedef struct bk
{
    char a;
    int x;
} box;
bool cmp(box a,box b)
{
    if(a.x!=b.x)
        return (b.x<a.x);
    return a.a<b.a;
}
int main()
{
	//freopen("in.in","r+",stdin);
	int n,i;
	string inp,a,b;
    while(cin>>n)
    {
        vector<box> v (100);
        getchar();
        while(n--)
        {
            getline(cin,inp);
            for(i=0;i<inp.size();i++)
            {
                char s = toupper(inp[i]);
                v[s-'A'].a=s;
                v[s-'A'].x++;
            }
        }
        sort(v.begin(),v.end(),cmp);
        for(i=0;i<v.size();i++)
        {
            if(v[i].x==0) break;
            cout<<v[i].a<<" "<<v[i].x<<endl;
        }
    }

return 0;
}
