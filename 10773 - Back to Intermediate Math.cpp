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
double letsGo(double d,double u,double v)
{
    double d1=(1.0 * d) / (u*1.0);
    double d2 = (1.0 * d) / sqrt((u*u) -(v*v));
    return fabs(d1-d2);
}
int main()
{
	//freopen("in.in","r+",stdin);
	int kase,i,j,k=1,p,q;
	double d,u,v;
	cin>>kase;
	while(kase--)
    {
        cin>>d>>v>>u;
        if(v==0 || u==0 || v>=u )
        {
            cout<<"Case "<<k++<<": can't determine"<<endl;
            continue;
        }
        printf("Case %d: %.3lf\n",k++ , letsGo(d,u,v));

    }


return 0;
}
