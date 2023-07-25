#include<stdio.h>
int main()
{
    int y,w,big,rem;

    scanf("%d %d",&y,&w);

    if(y>=w)
    {
        big = y;
    }
    else
    {
        big = w;
    }

    rem = 7-big;

    if(rem == 1)
        printf("1/6");
    else if(rem == 2)
        printf("1/3");
    else if(rem == 3)
        printf("1/2");
    else if(rem == 4)
        printf("2/3");
    else if(rem == 5)
        printf("5/6");
    else if(rem == 6)
        printf("1/1");


    return 0;
}
