#include<stdio.h>

int main ()

{
    int x,st1,result;
    int rem1,st2,rem2,st3,rem3,st4,rem4;

    scanf("%ld",&x);

    if (x<=5)
    {
        printf("1");
    }

    else
    {
        st1 = x/5;
        rem1 = x%5;

        st2 = rem1/4;
        rem2 = rem1%4;

        st3 = rem2/3;
        rem3 = rem2%3;

        st4 = rem3/2;
        rem4 = rem3%2;

        result = st1 + st2 + st3 + st4 + rem4 ;

        printf("%ld",result);
    }


    return 0;
}
