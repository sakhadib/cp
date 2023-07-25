#include<stdio.h>
int main()
{
    int red,blue,big,sml,dif,rem,same;

    scanf("%d %d",&red,&blue);

    if(red>blue)
        {
            big = red;
            sml = blue;
        }
    else
        {
            big = blue;
            sml = red;
        }

    dif = sml;

    rem = big - sml;

    same = rem/2;

    printf("%d %d",dif,same);



    return 0;
}
