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
map<char , int> mp;
string a="abcdefghijklmnopqrstuvwxyz ";
string b="123123123123123123412312341";
void init()
{
    int i;
    for(i=0;i<a.size();i++)
    {
        mp[a[i]]=b[i]-'0';
    }

}

int main()
{
	//freopen("in.in","r+",stdin);
    init();
    int n,kase,i,j,k=1;
    string st;
    cin>>n;
    getchar();
    while(n--)
    {
        int sum=0;
        getline(cin,st);
        for(i=0;i<st.size();i++)
        {
            sum+=mp[st[i]];
        }
        cout<<"Case #"<<k++<<": "<<sum<<endl;
    }

return 0;
}
