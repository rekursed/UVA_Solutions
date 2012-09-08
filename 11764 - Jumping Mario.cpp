#include<stdio.h>
#include<iostream>
int main()
{
    int hi,lo,i,j,k,n,kase,a[100000];
    while(scanf("%d",&kase)==1)
    {
        for(k=1;k<=kase;k++)
        {
            hi=lo=0;
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
                if(i==0)    continue;
                if(a[i]>a[i-1]) hi++;
                else    if(a[i]<a[i-1]) lo++;

            }
            printf("Case %d: %d %d\n",k,hi,lo);
        }
    }
    return 0;
}
