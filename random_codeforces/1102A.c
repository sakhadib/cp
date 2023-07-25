#include<Stdio.h>
int main()
{
    int n,a;

    scanf("%d",&n);
    a = n/2;

    if(n%2==0)
    {
        if(a%2==0)
            printf("0");
        else
            printf("1");
    }

    else
    {
        if(a%2==0)
            printf("1");
        else
            printf("0");
    }


    return 0;
}
