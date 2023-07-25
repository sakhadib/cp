#include<stdio.h>

int main()

{
    int n,i,x,y,z,x2,y2,z2,sum;

    scanf("%d",&n);

    x2 = y2 = z2 = 0;

    for (i=1;i<=n;i++)
    {
        scanf ("%d %d %d",&x,&y,&z);
        x2 = x2 + x;
        y2 = y2 + y;
        z2 = z2 + z;

    }



    if (x2==0 && y2==0 && z2==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}



