#include<stdio.h>
int main()
{
    
    int x,y,k,n,i,t;
    scanf("%d",t);

    for(int l=0; l<t;l++)
    {
        scanf("%d %d %d",&x,&y,&n);

        for(k=0;k<=n;k++)
        {
            if(k%x==y)
            {
                i = k;
            }
        }
        printf("%d\n",i);
    }

    return 0;
}