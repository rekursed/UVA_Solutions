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
typedef long long LONG;
typedef pair<LONG,LONG> LL;

bool cmp(LL a, LL b)
{
    return (a.first< b.first);
}
string tostr(LONG x)
{
    ostringstream ss;
    ss << x;
    return ss.str();
}
bool check(LONG x)
{
    bool chk[23]={false};
    ostringstream ss;
    ss << x;
    string res = ss.str();

    for(int i=0;i<res.size();i++)
    {
        int d= res[i]-'0';
        if(!chk[d])
            chk[d]=true;
        else
            return false;
    }
    return true;
}

int main()
{
	//freopen("in.in","r+",stdin);
	int tasty;
	LONG n,i,j,k,num;
	bool fst=false;
	vector < LL > v;
    cin >> tasty;
    while(tasty--)
    {
        cin>> n;
        v.clear();
        for(i=1; (n*i) >=0;i++)
        {
            num = n*i;
            string nu = tostr(num);
            if(nu.size()>10) break;
            if(check(i) && check(num))
                v.push_back(make_pair(num,i));
        }
        sort(v.begin(),v.end(),cmp);
        if(fst)
        {
            cout<<endl;
        }
        fst = true;
        for(i=0;i<v.size();i++)
        {
            cout<<v[i].first<<" / "<<v[i].second<<" = "<<n<<endl;
        }
    }

return 0;
}
