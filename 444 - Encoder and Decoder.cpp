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

int main()
{
    char inp[1000],ans1[1000],ans2[1000];
    int i,j,k,m,n;
    while(gets(inp))
    {
        if(!isdigit(inp[0]))
        {
            n=strlen(inp);
            for(i=0,j=0;i<n;i++)
            {
                m=inp[i];
                char asc[100];
                k=0;
                while(m>0)
                {
                    asc[k++]= (m%10) +'0';
                    m=m/10;
                }
                while(k--)
                {
                    ans1[j++] = asc[k];
                }
            }
            ans2[j]='\0';
            for(i=0; i< j;i++)
            {
                ans2[i]= ans1[j-i-1];
            }
            puts(ans2);
        }
        else
        {
            n= strlen(inp);
            string in (inp);
            string t;
            for(i=1,j=0 ;i< n ;i++)
            {

                if(in[i] == '1')
                {
                    t= in.substr(i-2 , 3 );
                    string temp (t.rbegin(),t.rend());
                    cout<<temp<<endl;
                    i+=2;
                    m=100;
                    int sum=0;
                    for(k=temp.size();k>0; k--)
                    {
                        sum += (temp[k]-'0')*m;
                        m=m/10;
                    }
                    ans1[j++] = sum;
                }
                else if( in[i] >='6')
                {
                    t=in.substr(i-1,2);
                    i++;
                    string temp(t.rbegin() , t.rend());
                    //cout<<temp<<endl;
                    m=10;
                   int sum=0;
                    for(k=0;k<temp.size(); k++)
                    {
                        sum += (temp[k]-'0')*m;
                        m=m/10;
                    }
                    ans1[j++]=sum;
                }
            }
            ans1[j]='\0';
            string ans(ans1);
            string an (ans.rbegin(), ans.rend());
            cout<<an<<endl;
        }
    }


return 0;
}
