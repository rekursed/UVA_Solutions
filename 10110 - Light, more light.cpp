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

int main()
{
    long long n,m,i,j,k;
    while(cin>>n && n)
    {
        m=floor(sqrt(n));
        if(n==m*m)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }

    }


	return 0;
}
