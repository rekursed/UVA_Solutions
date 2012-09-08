
#include<stdio.h>
int main()
{
    int a[10000],n,i,j,k=1;
    while(scanf("%d",&n)==1 && n)
    {
        int s=0,g=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]==0)
            {
                g++;
            }
            else
            {
                s++;
            }
        }
        printf("Case %d: %d\n",k++,s-g);
    }
    return 0;
}
