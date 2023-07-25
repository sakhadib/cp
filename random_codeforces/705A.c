#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);

    if(n==1)
    {
        printf("I hate it");
    }

    else
    {
        for(i=2;i<=n;i++)
        {
            if(i==2)
            {
                printf("I hate that ");
            }
            if(i%2==0)
            {
                printf("I love ");

                if(i==n)
                    printf("it");
                else
                    printf("that ");
            }
            else
            {
                printf("I hate ");

                if(i==n)
                    printf("it");
                else
                    printf("that ");
            }
        }
    }



    return 0;
}
