#include<stdio.h>
#include<string.h>

int main ()
{
    int i,k,n;
    char a[50];

    scanf ("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%s",a);
        k=strlen(a);

        if (k > 10)
        {
            printf("%c%d%c",a[0],k-2,a[k-1]);
        }
        else
        {
            printf("%s",a);
        }
        printf("\n");
    }




    return 0;
}
