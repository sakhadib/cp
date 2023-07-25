#include<stdio.h>

int main()

{
    int wl,wb,i;

    scanf("%d %d",&wl,&wb);
    i = 0;

    while(1)
    {
        wl = wl*3;
        wb = wb*2;

        i = i+1;

        if(wl>wb)
        {
            printf("%d",i);
            break;
        }

    }

    return 0;
}
