#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    int i,j,len,CT,ct,p,q,m;

    ct=CT=0;

    scanf("%s",s);
    len = strlen(s);

    m = len - 1;

    for(p=0;p<len;p++)
    {
        if(s[p]>64 && s[p]<91)
        {
            CT++;
        }

        else if(s[p]>96 && s[p]<123)
        {
            ct++;
        }
    }

    if(ct == len)
    {
        printf("%s",s);
    }
    else if(CT == len)
    {
        for(q=0;q<len;q++)
        {
            s[q] = s[q] + 32;
        }
        printf("%s",s);
    }

    else
    {
    for(i=0;i<len;i++)
    {
        if(i==0 && s[i]>96 && s[i]<123 && CT==m )
        {
            s[i]=s[i]-32;
        }
        else if (i==0 && s[i]>64 && s[i]<91)
        {
            s[i]=s[i];
        }
        else if (i==0 && s[i]>96 && s[i]<123 && CT!=m)
        {
            s[i]=s[i];
        }

        if(CT == m && i>0)
        {
            s[i] = s[i] + 32;
        }

        else if (CT!=m)
        {
            s[i] = s[i];
        }

    }

    printf("%s",s);
    }







}
