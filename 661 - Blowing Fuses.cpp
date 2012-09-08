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
bool sw[100000];
int dv[100000];
int main()
{
        int mx,i,j,k,n,m,c,a,tasty=1;
        bool blow=false;
        while(cin>>n>>m>>c )
        {
            if(tasty!=1)
                cout<<endl;
            if(!n && !m && !c) break;
            memset(dv,0,sizeof dv);
            memset(sw,0,sizeof sw);
            mx=k=0;
            blow=false;
            for(i=1;i<=n;i++)
            {
                cin>>dv[i];
            }
            for(i=0;i<m;i++)
            {
                cin>>a;
                sw[a]=!sw[a];
                if(sw[a])
                {
                    k+=dv[a];
                    mx=max(mx,k);
                }
                else
                {
                    k-=dv[a];
                }
            }
            cout<<"Sequence "<<tasty++<<endl;
            if(mx>c)
                cout<<"Fuse was blown.\n";
            else
                cout<<"Fuse was not blown.\nMaximal power consumption was "<<mx<<" amperes.\n";
        }


return 0;
}
