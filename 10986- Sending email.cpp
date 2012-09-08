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
#define INF 999999
#define MX_N 20000

using namespace std;
typedef pair<int,int> II;

int dis[20000+5];
vector< II > adj[20000+5];
int n;
//priority_queue< II > *Q;

bool operator<(const II& lhs, const II& rhs){
	return lhs.second > rhs.second;
}
void addEdge(int a,int b,int wi)
{
    adj[a].push_back(make_pair(b,wi));
    //w[a][b]=wi;
}
void init(int s)
{
    for(int i=0;i<=n;i++)
        dis[i]=INF;
}
/*
void relax(II y)
{
    int cur=y.first, int cost =y.second;
    if(cost > dis[cur]){
			return;
		}
    for(int i=0;i<(int)adj[cur].size();i++)
    {
        int v=adj[cur][i];
        cout<<"-> "<<b<<endl;
        if(!visited[b] && dis[b]> dis[a]+w[a][b])
        {
            dis[b]=dis[a]+w[a][b];
            (*Q).push(II(b,dis[b]));
            visited[b]=true;
        }
    }
}
*/
void shortestPath(int src,int dest)
{
    priority_queue< II > Q;
    Q.push(make_pair(src,0));
    dis[src]=0;
    while(!Q.empty())
    {
        II top = Q.top(); Q.pop();
        int cur = top.first;
        int cost = top.second;
        if(cost>dis[cur])
            continue;
        for(int i=0;i<adj[cur].size();i++)
        {
            int v = adj[cur][i].first, nd = cost+adj[cur][i].second;
            if(nd<dis[v])
            {
                dis[v]=nd;
                Q.push(make_pair(v,nd));
            }
        }
    }
    //cout<<INF<<endl;
    if(dis[dest]==INF)
    {
        puts("unreachable");
    }
    else
    {
        printf("%d\n",dis[dest]);
    }
}
int main()
{
	//freopen("in.txt","r+",stdin);
	int tasty,N,m,S,T,i,j,k,a,b,wi;

    while(cin>>N)
    {
        for(tasty=1;tasty<=N;tasty++)
        {

            cin>>n>>m>>S>>T;
            /// Reset
            /*
            for(i=0;i<=n; i++)
            {
                memset(w[i],0,n);
            }*/
            //memset(visited,false,sizeof visited);
            for(i=0;i<=n;i++)
            {
                adj[i].clear();
            }
            fill(dis,dis+MX_N,INF);
            cout<<"Case #"<<tasty<<": ";
            for(i=0;i<m;i++)
            {
                cin>>a>>b>>wi;
                adj[a].push_back(make_pair(b,wi));
                adj[b].push_back(make_pair(a,wi));
            }
            /*
            for(j=0;j<n;j++)
            {
                cout<<endl<<j <<" -S> "<<adj[j].size()<<endl;
                for(k=0;k<adj[j].size();k++)
                {
                    cout<<j<<" to "<<adj[j][k].first<<" dis "<<adj[j][k].second<<endl;
                }
            }
            */
            shortestPath(S,T);
        }

    }

return 0;
}
