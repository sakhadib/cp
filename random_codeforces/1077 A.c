#include<stdio.h>

int main()
{
    long long int t, a, b, k, x=0;

    //joss code

    scanf("%lld", &t);

    for(int i=0; i<t; i++)
    {
        scanf("%lld %lld %lld", &a, &b, &k);

        if(k%2==0)
        {
            x=(a-b)*(k/2);
        }
        else
        {
            x=((a-b)*(k/2))+a;
        }
        printf("%lld\n", x);
    }
    return 0;
}
