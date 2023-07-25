#include<stdio.h>
int main()
{
    int a,b,s,i,t;

    //joss code

    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&a,&b);

        if(a==0)
            s = 1;
        else if(b==0)
            s = a+1;
        else
            s = (b*2)+a+1;


        printf("%d\n",s);
    }

    return 0;
}
