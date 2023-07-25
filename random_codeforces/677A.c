#include<stdio.h>
int main()
{
    int n,h,wid=0,i,hit;

    scanf("%d %d",&n,&h);

    for (i=1;i<=n;i++)
    {
        scanf("%d",&hit);

        if(hit>h)
        {
            wid = wid + 2;
        }
        else
        {
            wid = wid + 1;
        }
    }

    printf("%d",wid);

    return 0;
}
