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
#include<climits>
#define mx 4294967296
using namespace std;
typedef long long vlng;
long long bee[1000],fib[1000];
void fibo()
{
    int i;
    fib[0]=0;
    fib[1]=1;
    fib[2]=1;
//    fib[3]=2;
//    fib[4]=3;
    bee[0]=0;
    bee[1]=1;
    bee[2]=2;
    for(i=3;bee[i-1]<=mx;i++)
    {
        fib[i]=fib[i-1]+    fib[i-2];
        bee[i]=bee[i-1]+fib[i];
    }
    cout<<bee[i-2]<<endl;

}
int main()
{

    fibo();
    int n;
    while(scanf("%d",&n)==1 && n>=0)
    {
        printf("%lld %lld\n",bee[n],bee[n+1]);
    }
	return 0;
}
