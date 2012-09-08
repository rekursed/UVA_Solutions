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

using namespace std;

long gcd(long a, long b)
{
    return (b ? gcd(b,a%b) : a);
}


long comb(int n, int k )
{
    int i,j,a[200],d;
    long res , g;
    if(k>n/2)   k=n-k;

    for (i=0; i<k; i++)
        a[i] = n-i;

   for (j=2; j<=k; j++)
        for (i=0, d=j; d>1; i++)
          {
                g = gcd(a[i],d);
                a[i] /= g;
                d /= g;
          }
    for(i=0,res=1; i<k; res*=a[i++]);
    return(res);
}
int main()
{
    int n,k;
	while(scanf("%d %d",&n,&k)==2 && n!=0 && k!=0)
    {
        printf("%ld\n",comb(n,k));
    }
	return 0;
}
