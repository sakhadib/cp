#include<stdio.h>

int main ()

{
    int year,a,b,c,d,ra,rb,rc,res;

    scanf("%d",&year);

    if(year>=1000 && year <=9000)
    {
        while(1)
    {
        year = year + 1;

        a = year/1000;
        ra = year%1000;

        b = ra/100;
        rb = ra%100;

        c = rb/10;
        rc = rb%10;

        d = rc;

        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            printf("%d",year);
            break;
        }

    }
    }

    return 0;
}
