#include<stdio.h>
int main()
{
    double n,pi,i,sum=0,ans;

    scanf("%lf",&n);

    for (i=1;i<=n;i++)
    {
        scanf("%lf",&pi);
        sum = sum + pi;
    }

    ans = sum/n;

    printf("%lf",ans);

    return 0;
}
