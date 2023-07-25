#include<stdio.h>
int main()
{
    int t,i,pt,ptp,big,sml,ct=0;

    //joss code

    scanf("%d",&t);
    scanf("%d",&ptp);

    sml = big = ptp;

    for(i=1;i<t;i++)
    {
        scanf("%d",&pt);

        if(pt>big)
        {
            big = pt;
            ct++;
        }
        else if (pt<sml)
        {
            sml = pt;
            ct++;
        }



    }

    printf("%d",ct);

    printf("\n\n%d %d",sml,big);


    return 0;
}
