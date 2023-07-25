#include<stdio.h>
int main()
{
    int t,i,candy,res;

    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d",&candy);

        if (candy==0||candy==1||candy==2)
        {
            printf("0\n");
        }
        else if(candy!=2 && candy%2==0)
        {
            res = (candy/2)-1;
            printf("%d\n",res);
        }
        else
        {
            res = candy/2;
            printf("%d\n",res);
        }
    }

    return 0;
}
