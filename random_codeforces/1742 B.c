#include<stdio.h>

int main()
{
    long long int t, n, no=0, yes=0;
    int a1[100], a2[100];
    scanf("%lld", &t);

    for(int i=0; i<t; i++)
    {
        scanf("%lld", &n);

        for(int i=0; i<n; i++)
        {
            scanf("%lld", &a1[i]);
        }
        for(int i=0; i<n; i++)
        {
            a2[i]=a1[i];
        }
        for(int i=0; i<n; i++)
            {
                no=0;
                yes=0;
                for(int j=0; j<n; j++)
                {
                    if(a1[i]==a2[j])
                    {
                        no++;
                    }
                }
                if(no>1)
                {
                    printf("NO\n");
                    break;
                }
                else
                {
                    yes=1;
                }
            }

            if(yes==1)
            {
                printf("YES\n");
            }
    }

    return 0;
}
