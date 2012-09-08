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

string tosring(int x)
{
    stringstream ss;
    ss << x;
    return ss.str();
}
int toint(string y)
{
    istringstream buff(y);
    int val ;
    buff>>val;
    return val;
}

int main()
{
    int n,i,j,k,indx[10000];
    string db[10000];
    string by,cz;
    char *ax;
    cin>>n;
    getchar();
    while(n--)
    {
        getchar();
        getline(cin,by);
        istringstream iss (by);
        int m=strlen(ax);
        k=1;
        string token;
        while(getline(iss,token,' '))
        {
            indx[k++]=toint(token);
        }
        getline(cin,cz);
        istringstream isss(cz);
        string ddb;
        k=1;
        while(getline(isss,ddb,' '))
        {
            db[indx[k++]]=ddb;
        }

        for(i=1;i<k;i++)
        cout<<db[i]<<endl;
        if(n!=0)
            cout<<endl;
    }
return 0;
}
