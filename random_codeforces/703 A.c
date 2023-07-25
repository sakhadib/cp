#include<stdio.h>
int main()
{
    int n,i,m,c,mct=0,cct=0;

    //joss code

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d %d",&m,&c);
        if(m>c)
            mct++;
        else if(c>m)
            cct++;
    }

    if(mct>cct)
    {
        printf("Mishka");
    }
    else if(cct>mct)
    {
        printf("Chris");
    }
    else
    {
        printf("Friendship is magic!^^");
    }
    return 0;
}
