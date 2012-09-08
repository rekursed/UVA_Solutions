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
string a="qwertyuiop[]asdfghjkl;\\'zxcvbnm,./";
//string b="ertyuiop[]\dfghjkl;'cvbnm,./"
int main()
{
	//freopen("in.in","r+",stdin);
	string str;
	int i,j,k;
    while(getline(cin, str))
    {
        for(i=0;i<str.size();i++)
        {
            if(str[i]!=' ')
                for(j=0;j<a.size();j++)
                {
                    if(tolower(str[i])==a[j] && tolower(str[i])!='q' && tolower(str[i])!='w' && str[i]!='\\')
                    {
                        if(str[i]=='\'' ) cout<<"l";
                        else
                            cout<<a[j-2];
                    }
                }
            else
                cout<<" ";
        }
        cout<<endl;
    }

return 0;
}
