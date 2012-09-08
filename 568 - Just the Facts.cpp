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
int fact[10002];
void factor()
{
    fact[0]=fact[1]=1;
    int f=1;
    for(int i=2;i<10001;i++)
    {
        f*=i;
        while(f%10==0)
            f/=10;
        f=f%100000;
        fact[i]=f%10;
    }
}
int main()
{
	//freopen("in.in","r+",stdin);
	factor();
	int n;
    while(cin>>n)
    {
        printf("%5d -> %d\n", n , fact[n]);
    }

return 0;
}
