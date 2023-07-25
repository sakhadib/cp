#include<stdio.h>
int main()
{
    int t,i,n,res;

    //joss code

    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%d",&n);

        if(n%2==0)
            res = n/2;
        else if(n%2!=0)
            res = (n/2)+1;

        printf("%d\n",res);
    }

    return 0;
}
