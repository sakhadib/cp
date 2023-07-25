#include<stdio.h>
#include<string.h>

int main()

{
    char a[100],s[100];
    int i,sa,ss,j,compare;

    scanf("%s",s);
    scanf("%s",a);

    sa = strlen(a);
    ss = strlen(s);

    for(i=0;i<ss;i++)
    {
        if(s[i]>=97)
        {
            s[i] = s[i] - 32;
        }
    }

    for(j=0;j<sa;j++)
    {
        if(a[j]>=97)
        {
            a[j] = a[j] - 32;
        }
    }

    compare = strcmp(s,a);

    printf("%d",compare);

    //printf("%s\n%s",s,a);

    return 0;


}
