#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    char t[100];
    int i,j,len,ln,ct=0;

    scanf("%s",s);
    scanf("%s",t);

    len = strlen(s);
    ln = len-1;

   for(i=0;i<=ln;i++)
        {
            if(s[i]==t[ln-i])
            {
                ct++;
                //printf("\n%c\t%c",s[i],t[i]);
            }
        }

        if (ct == len)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }

    //printf("\n\n\n%d",ct);

    return 0;
}
