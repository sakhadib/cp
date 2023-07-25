#include<stdio.h>

int main()

{
    int a,b,c,s1,s2,s3,s4,s5,s6,res;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    s1 = a+b+c;
    s2 = a*(b+c);
    s3 = (a+b)*c;
    s4 = a*b*c;
    s5 = a+(b*c);
    s6 = (a*b)+c;

    if(s1>=s2 && s1>=s3 && s1>=s4 && s1>=s5 && s1>=s6)
        res = s1;

    else if(s2>=s1 && s2>=s3 && s2>=s4 && s2>=s5 && s2>=s6)
        res = s2;

    else if(s3>=s1 && s3>=s2 && s3>=s4 && s3>=s5 && s3>=s6)
        res = s3;

    else if(s4>=s1 && s4>=s2 && s4>=s3 && s4>=s5 && s4>=s6)
        res = s4;

    else if(s5>=s1 && s5>=s2 && s5>=s3 && s5>=s4 && s5>=s6)
        res = s5;

    else
        res = s6;

    printf("%d",res);

    return 0;

}
