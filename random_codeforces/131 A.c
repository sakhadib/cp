#include<stdio.h>
#include<string.h>
int main()

{
    char s[100];
    int i=0,l=0,j=0,ct,m=0;

    ct = 0;


    scanf("%s",s);

    l = strlen(s);
    m=l-1;

    for(j=1;j<l;j++)
        {
            if(s[j]>64 && s[j]<91)
            {
                ct = ct+1;
            }
        }

    for(i=0;i<l;i++)
    {
        if(i==0 && s[i]>96 && s[i]<123 && ct == m)
        {
            s[i]=s[i]-32;
        }
        else if (i==0 && s[i]>64 && s[i]<91)
        {
            s[i]=s[i];
        }
        else if (i==0 && s[i]>96 && s[i]<123 && ct!=m)
        {
            s[i]=s[i];
        }

        if(ct == m && i>0)
        {
            s[i] = s[i] + 32;
        }

        else
        {
            s[i] = s[i];
        }

    }

    //printf("%d %d %d",m,ct,l);

    printf("%s",s);

    return 0;
}
