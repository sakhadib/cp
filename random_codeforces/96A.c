#include<stdio.h>
#include<string.h>

int main()

{
    int x,y,i,j;
    char s[100];

    x = 0;

    scanf("%s",s);

    y = strlen(s);

    for (i=0;i<=y;i++)
    {
        for(j=i+1;j<i+7;j++)
        {
            if(s[i]==s[j])
            {
                x = 1;
            }

            else
            {
                x = 0;
                break;
            }
        }
        if (x==1)
        {
            break;
        }

    }

        if(x==1)
        {
            printf("YES");
        }

        else
        {
            printf("NO");
        }

        return 0;
}
