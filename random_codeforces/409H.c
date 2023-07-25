#include<stdio.h>

int fib(int i)
{
    if(i==0)
    {
        return 0;
    }
    else if (i==1)
    {
        return 1;
    }
    else
    {
        return fib(i-1) + fib (i-2);
    }
    
}

int main()
{
    int a,i;
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        printf("%d ",fib(i));
    }

    return 0;
    
}