#include<stdio.h>
int main()
{
    int n, k, l, c, d, p, nl, np;
    int t_drink,t_lime,tst_d,tst_l,tst_s;
    int sml,toast;

    scanf("%d %d %d %d %d %d %d %d",&n, &k, &l, &c, &d, &p, &nl, &np);

    t_drink = k*l;
    t_lime = c*d;

    tst_d = t_drink/nl;
    tst_l = t_lime;
    tst_s = p/np;

    if (tst_d<=tst_l)
    {
        sml = tst_d;
    }
    else
    {
        sml = tst_l;
    }

    if(sml>tst_s)
    {
        sml = tst_s;
    }

    toast = sml/n;

    printf("%d",toast);
    return 0;
}
