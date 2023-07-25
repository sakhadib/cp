#include<stdio.h>

int main()

{
    char a[50];
    int i,len,ct=0,k;

    scanf("%d",&k);
    scanf("%s",a);

    len = k;

    for (i=0;i<len;i++)
    {
        if(a[i]==a[i+1])
        {
            ct++;
        }
    }

    printf("%d",ct);


    return 0;
}
