#include<stdio.h>
int main()
{
    int n,p,q,ct=0,i,blnk;

    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        scanf("%d %d",&p,&q);
        blnk = q - p;

        if(blnk >= 2)
            ct++;
    }

    printf("%d",ct);
    return 0;
}
