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

string r("rock");
string s("scissors");
string p("paper");
int IsWinner(int x, string a, int y, string b)
{
    if(a==r && b== s)
        return x;
    else if(a== s && b == p)
        return x;
    else if(a== p && b==r)
        return y;
    else if(a==s && b==r)
        return y;
    else if(a==p && b== s)
        return y;
    else if( a== r && b == p)
        return y;
}
int main()
{
    vector<int> win,lose,game;
    string A,B;
    int i,p,k,q,j=0,n,m;
    while(cin>> n && n!=0)
    {
        cin>>m;
        if(j==0)
        {
            j=1;
        }
        else
            cout<<endl;
        k=0;
        win.resize(n+2); lose.resize(n+2); game.resize(n+2);
        fill(win.begin(),win.end(),0);
        fill(lose.begin(),lose.end(),0);
        fill(game.begin(),game.end(),0);
        for(i=1;i<=m;i++)
        {
            cin>> p >> A >> q >> B;
            if(A==B)
            {
                k++;
                continue;
            }
            win[IsWinner(p,A,q,B)]++;
            lose[IsWinner(p,A,q,B)==p? p: q]++;
            game[p]++;
            game[q]++;
           // cout<<IsWinner(p,A,q,B)<<endl;

        }
        //cout<<k<<endl;
        for(i=1;i<=n;i++)
        {
            //cout<<playa[i]<<endl;
            if(game[i]==0)
                cout<<"-\n";
            else
            printf("%.3lf\n",(double)win[i]/(double)game[i]);
        }


    }



return 0;
}
