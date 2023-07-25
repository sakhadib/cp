#include<stdio.h>

int main ()

{
    long long int n,m,a,num1,num2,rem1,rem2,count;

    scanf("%lld %lld %lld", &n,&m,&a);

    rem1 = n%a;
    rem2 = m%a;
    num1 = n/a;
    num2 = m/a;

    if (rem1 != 0)
    {
        num1 = num1+1;
    }
    if (rem2 != 0)
    {
        num2 = num2+1;
    }

    count = num1*num2;

    printf("%lld",count);

    return 0;
}
