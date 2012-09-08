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
typedef long long Lint;
using namespace std;
int L[400],x[400],y[400],z[400];
typedef struct blx{
    int x,y,z;
} block;
int N;
vector<block> Q;
bool operator<(const block& a,const block& b)
{
    if(a.x!= b.x) return (a.x>b.x);
    else  if(a.y!= b.y) return (a.y>b.y);
    else return (a.z>b.z);
}
int LIStower()
{
    int i,j;
    int maxLength = 0;
    for(i=0;i<Q.size();i++)
    {
         L[i]=Q[i].z;
        for(j=0; j<i ;j++)
        {
            if((Q[j].x>Q[i].x && Q[j].y > Q[i].y) || (Q[j].x > Q[i].y && Q[j].y > Q[i].x))
            {
                L[i] = max(L[i],  L[j]+Q[i].z);
            }
        }
        maxLength= max(maxLength,L[i]);
    }
    return maxLength;
}

int main()
{
	int tasty=1,n,i,a,b,c;
    while(cin>>n && n)
    {
        Q.clear();
        while(n--)
        {
            cin>>a>>b>>c;
            Q.push_back((block){a,b,c});
            Q.push_back((block){a,c,b});
            Q.push_back((block){b,a,c});
            Q.push_back((block){b,c,a});
            Q.push_back((block){c,a,b});
            Q.push_back((block){c,b,a});
        }
        N=Q.size();
        sort(Q.begin(),Q.end());

        cout<< "Case "<<tasty++<<": maximum height = "<<LIStower()<<endl;
    }

return 0;
}
