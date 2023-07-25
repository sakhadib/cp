#include<stdio.h>

int main()
{
    int h1, m1, h2, m2, hr, min, temp;

    //joss code

    scanf("%d:%d", &h1, &m1);
    scanf("%d:%d", &h2, &m2);



    temp=((h2-h1)*60-m1+m2)/2;
    if(temp>=60)
    {
        hr=h1+(temp/60);
        min=m1+(temp%60);
    }
    else
    {
        hr=h1;
        min=m1+temp;
    }
    if(min>=60)
    {
        hr=hr+1;
        min=min-60;
    }
    printf("%.2d:%.2d", hr, min);

    return 0;
}
