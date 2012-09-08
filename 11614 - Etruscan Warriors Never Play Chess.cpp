#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long n,d,x1,x2;
    int kase;

    while(scanf("%d",&kase)==1)
    {
        while(kase--)
        {
            cin>>n;
            d=(int) ceil(sqrt((double)(n*2)));

            x1= d*(d+1)/2;

            x2 = d* (d-1) /2;

            if( x1<= n )
                cout<< d<<endl;
            else if (x2 <= n )
                cout<< d-1 <<endl;
            else
                cout << d-2<<endl;


        }
    }
    return 0;
}
