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

#define MX 1000001
using namespace std;
typedef long long lint;
lint sol [1000010] = {0};
void solve()
{
    lint i,j=1,k=2;
    sol[0]=sol[1]=1;
    for(i=2;i<=MX;i+=2)
    {
        sol[i]=sol[i+1]=sol[i-1] + k++;
    }
}
int main()
{
	//freopen("in.in","r+",stdin);
	lint n;
	solve();
    while(cin>>n)
    {
        lint i= (n/2)+1;
        cout<<i*(i+1)/2<<endl;
    }
return 0;
}
