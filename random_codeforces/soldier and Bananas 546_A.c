#include<stdio.h>

int main ()

{
    long long int k,n,w,price,net,b;
    int i;

    net = 0;

    scanf("%lld %lld %lld",&k,&n,&w);

    for (i=1;i<=w;i++)
    {
        price = i*k;
        net = net + price;

    }

    b = net - n;

    if (net <= n)
    {
        printf ("0");
    }

    else
    {
        printf("%lld",b);
    }



    return 0;



}
