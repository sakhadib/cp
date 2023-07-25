#include<stdio.h>
int main()
{
    int t,b,i,c;

    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d",&b);
        c = (b/2)+1;

        printf("%d\n",c);

    }

    return 0;
}
