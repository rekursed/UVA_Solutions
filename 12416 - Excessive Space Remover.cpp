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
char Sp=' ';
int main()
{
    string in;
    int i,j,k,mx;
    while(getline(cin,in))
    {
        k=mx=0;
        for(i=0;i<in.length();i++)
        {
            if(in[i]==Sp)
            {
                k++;
            }
            else
            {
                mx=max(mx,k);
                k=0;
            }
        }
        k=mx;
        int ans=0;
        while(mx!=0)
        {
            mx=mx>>1;
            ans++;
        }
        if(!(k&(k-1))) ans--;
        cout<<ans<<endl;
    }
return 0;
}
