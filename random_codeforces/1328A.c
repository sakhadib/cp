#include<stdio.h>
int main()
{
    int t,i,a,b,mv;

    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        mv = 0;
        scanf("%d %d",&a,&b);
        while(a%b)
        {
            mv++;
            a++;
        }

        printf("%d\n",mv);
    }

    return 0;
}
