#include<stdio.h>
#include<string.h>
int main()
{
    char a[30];
    int i,len,c4=0,c7=0,ct;

    scanf("%s",a);

    len = strlen(a);

    for(i=0;i<len;i++)
    {
        if(a[i]=='4')
        {
            c4 = c4+1;
        }
        else if (a[i] == '7')
        {
            c7 = c7+1;
        }
    }

    ct = c4+c7;

    if(ct==4 || ct==7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
