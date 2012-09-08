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

string clean(string s)
{
    for(int i=0;i<s.length();i++)
        if(!isalpha(s[i])&& !isdigit(s[i]))
            s[i]= ' ';
    return s;
}
vector<string> Split (string s)
{
    vector <string> coll;
    istringstream str(s);
    string w;
    while(str>>w)
    {
        coll.push_back(w);
    }
    return coll;
}
int LCS(string p,string q)
{
    vector<string> A = Split(p);
    vector<string> B = Split(q);

    vector<vector<int> > c (A.size()+1 , vector<int>(B.size()+1 , 0));

    for(int i=1;i<= A.size();i++)
        for(int j=1;j <= B.size();j++)
    {
        if(A[i-1]==B[j-1])
        {
            c[i][j]=1+ c[i-1][j-1];
        }
        else
            c[i][j]=max(c[i-1][j],c[i][j-1]);

    }
    return c[A.size()][B.size()];

}
int main()
{
	freopen("in.txt","r+",stdin);
    int tasty=1;
    string a,b;
    while(getline(cin , a)&& getline(cin , b))
    {
        printf("%2d. ",tasty++);
        if(a.size()==0 || b.size()==0 )
        {
            puts("Blank!");
        }
        else
        {
            cout<<"Length of longest match: "<<LCS(clean(a),clean(b))<<endl;
        }

    }

return 0;
}
