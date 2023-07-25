#include<stdio.h>
int main()
{
    int t,a,b,c,d,i,ct;

    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        ct = 0;

        scanf("%d %d %d %d",&a,&b,&c,&d);

        if (b>a)
        {
            ct++;
        }
        if (c>a)
        {
            ct++;
        }
        if (d>a)
        {
            ct++;
        }

        printf("%d\n",ct);
    }

    return 0;
}
