#include<stdio.h>
int main()
{
    int k,r,i,rem,ct=1,temp;

    //joss code

    scanf("%d %d",&k,&r);

    temp = k;

    while (1)
    {
        rem = k%10;
        if(rem==r||rem==0)
        {
            break;
        }
        else{
            ct++;
        }
        k = k+temp;

    }

    printf("%d",ct);

    return 0;

}
