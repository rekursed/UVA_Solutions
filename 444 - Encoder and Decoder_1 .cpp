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
string toStr(int i)
{
    //int i;
    stringstream ss;
    ss<<i;
    return ss.str();

}
void encode( string x)
{
    int i;
    string ans="";
    for(i=0;i<x.size();i++)
    {
        int d = x[i];
        ans+=toStr(d);
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
}

void decode( string x)
{
    int i;
    reverse(x.begin() , x.end());
    for( i = 0 ;i< x.size() ; i+=2)
    {
        int as=0;
        if(x[i]=='1')
        {
            as=100;
            i++;
        }
        as+= (x[i]-'0')*10 + (x[i+1] -'0');
        printf("%c",as);
    }
    cout<<endl;
}

int main()
{
	//freopen("in.in","r+",stdin);
	string str;
    while(getline(cin,str))
    {
        if( isalpha(str[0]))
        {
            encode(str);
        }
        else
        {
            decode(str);
        }
    }

return 0;
}
