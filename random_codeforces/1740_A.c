#include<stdio.h>
int main()
{
    
    
    int t,n,m;
    scanf("%d",&t);

    for (int i = 0; i<t; i++)
    {
        scanf("%d",&n);

        if(n%2!=0)
        {
            m = 3;
        }
        else
        {
            m = 2;
        }

        printf("%d\n",m);
    }

    return 0;
}