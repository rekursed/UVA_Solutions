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
lint solve(lint a,lint L)
{
    lint i=1;

    while(a!=1 && a<=L)
    {
        if(a==1) return i;
        if(a&1)
            a=(3*a)+1;
        else
            a/=2;
        if(a>L) return i;
        i++;
    }
    return i;
}

int main()
{
	//freopen("in.in","r+",stdin);
    int kase=1,i,j,A,N;
    while(cin>>A>>N)
    {
        if(A<0 && N<0) break;
        cout<<"Case "<<kase++<<": A = "<<A<<", limit = "<< N <<", number of terms = "<<solve(A,N)<<endl;
    }

return 0;
}
