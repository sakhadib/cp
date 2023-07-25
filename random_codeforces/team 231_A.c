#include<stdio.h>

int main()

{
    int a,i,p,v,t,count,k;

    count = 0;

    scanf("%d",&a);

    for (i=1;i<=a;i++)
    {
        scanf("%d %d %d",&p,&v,&t);
        k = p+v+t;
        if (k>1)
        {
            count = count + 1;
        }
    }

    printf("%d",count);

    return 0;
}
