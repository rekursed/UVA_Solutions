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
map<string,int> city;
int w[2000][2000],d[2000][2000];
void minimax(int n)
{
    int i,j,k;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            d[i][j]=w[i][j];
    for(i=0;i<=n;i++)
        d[i][i]=0;
    for(k=1;k<=n;k++)
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
            {
                d[i][j]= max(d[i][j], min( d[i][k] , d[k][j] ) );
                //d[j][i]=d[i][j];
            }
}
int main()
{
	//freopen("in.in","r+",stdin);
	int n,m,i,j,k,p,q,kase=1;
	string c1,c2;
    while(cin>>m>>n && m&& n)
    {
        memset(w,sizeof w , 0);
        city.clear();
        for(i=1,j=1;i<=n;i++)
        {
            cin>>c1>>c2>>p;
            if(city [ c1 ] == 0) city[c1] = j++;
            if(city [ c2 ] == 0) city[c2] = j++;
            w[city[c1]][city[c2]] = p;
            w[city[c2]][city[c1]] = p;
        }
        minimax(m);
        cin>>c1>>c2;
        cout<<"Scenario #"<<kase++<<endl;
        /*cout<<city[c1] <<"   "<<city[c2]<<endl;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++)
                cout<<w[i][j]<<" ";
            cout<<endl;
        }
        */
        cout<<d[city[c1]] [ city[c2]]<<" tons"<<endl<<endl;

    }

return 0;
}
