#include<stdio.h>

int main()

{
    int a,i,x=0;
    char p[4];

    scanf ("%d",&a);
    for (i=1;i<=a;i++)
    {
        scanf("%s",&p);

       if (p[1]=='+')
        {
            x=x+1;
        }
        else
        {
            x=x-1;
        }
    }

    printf ("%d",x);

    return 0;

}
