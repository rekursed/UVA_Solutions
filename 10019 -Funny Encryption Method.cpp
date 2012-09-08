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
int hx[]={0,1,1,2,1,2,2,3,1,2};
int main()
{
    int x,y,kase;
    cin>>kase;
        while(kase--)
        {
            cin>>x;
            y=x;
            int b1,b2;
            b1=b2=0;
            for(int i=0;i<16;i++)
            {
                if(y &(1<<i))
                    b1++;
            }
            y=x;
            while(y!=0)
            {
                b2+=hx[y%10];
                y/=10;
            }
            cout<<b1<<" "<<b2<<endl;
        }

    return 0;
}
