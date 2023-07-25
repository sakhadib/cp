#include<stdio.h>
int main()
{
    int t,i,k,p,q;

    scanf("%d",&t);

    for (i=1;i<=t;i++)
    {
        scanf("%d",&k);
        p = 0;
        q = 0;
        while(1)
        {
            p = p+1;

            if(p%3!=0 && p%10!=3)
            {
                q = q+1;

                if(q==k)
                {
                    printf("%d\n",p);
                    break;
                }
            }
        }





    }


    return 0;
}
