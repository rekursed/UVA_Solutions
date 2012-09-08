#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
#define mx 10000
////
////int ar[mx+4];
////void gen()
////{
////    int i,j=1,k,t=1;
////    int mxx=(int)sqrt(mx)+1;
////    for(i=2;i<=mxx; i++)
////    {
////        k=i*i;
////        for( ; j<k;j++)
////        {
////            if(j>mx) return;
////            ar[j]=t;
////        }
////        //getchar();
////        t++;
////        j=k;
////    }
////    ar[1]=1;
////}
////bool issqr(int x)
////{
////    int d=sqrt(x);
////    if(x== d*d)
////        return true;
////    else
////        return false;
////}
int main()
{
    //gen();
    //cout<<x;
    int a,b;
    while(scanf("%d %d",&a,&b)==2 && a!=0 && b!=0)
    {
        int d=floor(sqrt(b))-floor(sqrt(a-1));
        //if(issqr(a) ) d++;
        printf("%d\n",d);
    }
    return 0;
}
