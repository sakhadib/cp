#include<stdio.h>
#include<string.h>

int main()

{
    char s[100];
    int a,len,up,low,s_a,i,m;
    len = strlen(s);
    up = 0;
    low = 0;

    scanf("%s",s);

    for (a=0;a<=len;a++)
    {

        if(s[a]>=65 && s[a]<=90)
        {
            up = up+1;
        }

        else if(s[a]>=97 && s[a]<=122)
        {
            low = low+1;
        }


    }



    if (up>low)
    {
        for(i=0;i<=len;i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                printf("%c",s[i]);
            }
            else if(s[i]>=97 && s[i]<=122)
            {
                s[i] = s[i] - 32;
                printf("%c",s[i]);
            }
        }
    }

    else if (up<low)
    {
        for(i=0;i<=len;i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                s[i] = s[i] + 32;
                printf("%c",s[i]);
            }
            else if(s[i]>=97 && s[i]<=122)
            {

                printf("%c",s[i]);
            }
        }
    }

    else
    {
        for(i=0;i<=len;i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                s[i] = s[i] + 32;
                printf("%c",s[i]);
            }
            else if(s[i]>=97 && s[i]<=122)
            {

                printf("%c",s[i]);
            }
        }
    }
    return 0;
}
