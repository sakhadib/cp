#include<stdio.h>
int main()
{
    int t,hr,min,cnv_min,i,rem_hr,rem_min;

    scanf("%d",&t);

    for (i=0;i<t;i++)
    {
        scanf("%d %d",&hr,&min);
        rem_hr = 23 - hr;
        rem_min = 60 - min;

        cnv_min = (rem_hr*60)+rem_min;

        printf("%d\n",cnv_min);


    }

    return 0;
}
