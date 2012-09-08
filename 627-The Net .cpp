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
#define WH 0
#define GR 1
#define BL 2
#define INF 0
#define NIL -1
#define MX 99999
using namespace std;
int dis[310];
int pi[310];
vector <int> adj[310];
int n;

void BFS (int s, int des)
{
    int u=0,v=0;
    for(u=0;u<305;u++)
    {
        dis[u]=MX;
        pi[u]=NIL;
    }
    dis[s]=0;
    pi[s]=NIL;
    queue<int> Q;
    Q.push(s);
    while(!Q.empty())
    {
        u=Q.front();
        Q.pop();
        if(u==des) return;
        for(v=0;v<adj[u].size();v++)
        {
            if(dis[ adj[u].at(v) ]==MX)
            {
                dis[adj[u].at(v)]=dis[u]+1;
                pi[adj[u].at(v)]=u;

                Q.push(adj[u].at(v));
            }
        }
    }
}
void PathFinder(int d)
{
    vector<int> path;
    path.push_back(d);
    while(pi[d]!=NIL)
    {
        d=pi[d];
        path.push_back(d);
    }

    reverse(path.begin(),path.end());
    printf("%d",path[0]);
    for(int i=1;i<path.size();i++)
    {
        printf(" %d",path[i]);
    }
    cout<<endl;
}

int main()
{
    int m,i,j,k,u,v;
    freopen("in.in","r+",stdin);
    while(cin>>n)
    {
        getchar();
        memset(adj,false,sizeof adj);
        for(k=0;k<n;k++)
        {
            char *ph;
            char inp[1000];
            gets(inp);
            ph=strtok(inp,"-,");
            u=atoi(ph);
            ph=strtok(NULL,"-,");
            while(ph!=NULL)
            {
                v=atoi(ph);
                adj[u].push_back(v);
                ph=strtok(NULL,"-,");
            }
        }
        cin>>m;
        cout<<"-----\n";
        for(k=0;k<m;k++)
        {
            int src,des;
            cin>>src>>des;
            BFS(src,des);
            if(dis[des]==MX)
            {
                cout<<"connection impossible\n";
            }
            else
            {
                PathFinder(des);
            }
        }

    }




return 0;
}
