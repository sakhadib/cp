#include<stdio.h>
int main()
{
    int t,ct,j,n;
    char ch;
    scanf("%d",&t);

    for(int i = 0; i<t; i++)
    {
        scanf("%d",&n);
        ct = 0;
        for(j=0; j<n; j++)
        {
            scanf(" %c",&ch);

            if(ch == 'Q')
            {
                ct++;
            }
            else if(ct>=1)
            {
                ct--;
            }
        }

        if(ct==0)
        {
            printf("YES\n");
        }
        
        else
        {
            printf("NO\n");
        }


        //printf("\n\t%d\n",ct);
    }

    return 0;
}