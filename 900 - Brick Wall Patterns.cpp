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
typedef long long lint;
lint fib[3000];
void fibo(int n)
{
    fib[1]=1;
    fib[0]=1;
    fib[2]=2;
    fib[3]=3;
    for(int i=4;i<=n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
}
int main()
{
	//freopen("in.in","r+",stdin);
	fibo(50);
	int i,j,k,n,m;
	while(cin>>n && n!=0)
    {
        cout<<fib[n]<<endl;
    }


return 0;
}
