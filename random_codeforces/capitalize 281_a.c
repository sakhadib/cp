#include<stdio.h>

int main()

{
    char a[1000];
    int low,up;

    scanf("%s",a);

    low = a[0];

    if (low>=65 && low<=90)
    {
        up = low;
    }

    else if (low>=97 && low<=122)
    {
        up = low - 32;
        a[0] = up;
    }

    printf("%s",a);

    return 0;


}
