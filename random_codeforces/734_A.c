#include<stdio.h>
int main()
{
    long long int a,i;
    long long int ant=0,den=0;
    int s[10000];

    scanf("%lld",&a);
    scanf("%s",s);

    for(i=0;i<a;i++)
    {
        if(s[i]==65)
        {
            ant++;
        }
        if(s[i]==68)
        {
            den++;
        }
    }

    if(ant>den)
    {
        printf("Anton");
    }

    else if(den>ant)
    {
        printf("Danik");
    }

    else
    {
        printf("Friendship");
    }

    return 0;
}
