#include<stdio.h>
int main()
{
    int n,a,b;

    scanf("%d",&n);

    if(n%3==0)
    {
        a = n - 2;
        printf("1 1 %d",a);
    }
    else if (n%3!=0)
    {
        b = n - 3;
        printf("1 2 %d",b);
    }

    return 0;
}
