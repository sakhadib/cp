#include<stdio.h>
int main()
{
    int a,b,sum,i,t;

    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {

        scanf("%d %d",&a,&b);
        sum = a+b;
        printf("%d\n",sum);

    }

    return 0;
}
