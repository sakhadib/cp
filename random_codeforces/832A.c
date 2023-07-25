#include<stdio.h>
int main()
{
    long long int n,k,div;

    scanf("%lld %lld",&n,&k);

    div = n/k;

    if(div%2==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
}


/*

#include<stdio.h>
int main()
{



    return 0;
}

*/
