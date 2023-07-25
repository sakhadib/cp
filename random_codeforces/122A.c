#include<stdio.h>
int main()
{
    int a,i,temp,check_d,flag_1=0;
    int j,k,temp_2,temp_3,check_d2,flag_2=0;
    int final_check,flag_f=0;


    scanf("%d",&a);
    temp = a;

    for(i=0;i<=a;i++)
    {
        check_d = temp%10;
        if(check_d != 4 && check_d != 7)
        {
            flag_1 = 1;
            break;
        }
        temp = temp/10;
        if(temp==0)
        {
            break;
        }
    }


    if(flag_1 == 0)
    {
        printf("YES");
    }
    else
    {
        /*
        temp_2 = a/2;
        for(j=1;j<=temp_2;j++)
        {
            temp_3=j;

            for(k=0;k<=j;k++)
            {
                check_d2 = temp_3%10;
                if(check_d2!=4 && check_d2!=7)
                {
                    flag_2=1;
                    break;
                }
                temp_3 = temp_3/10;

                if(temp_3==0)
                {
                    break;
                }
            }

            if(flag_2==0)
            {
                final_check = a%j;

                if(final_check==0)
                {
                    flag_f=1;

                }
            }

            if(flag_f=1)
            {
                break;
            }

        }

        if(flag_f=1)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }

        */

        for (j=0;j<=a;j++)
        {
            if(j==4||j==7||j==44||j==47||j==74||j==77||j==444||j==447||j==474||j==477||j==744||j==747||j==774||j==777)
            {
                if(a%j==0)
                {
                    flag_f=1;
                }
                else
                {
                    flag_f=0;
                }
            }

            if(flag_f==1)
            {
                break;
            }
        }

        if(flag_f==1)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }

    printf("\n\n%d",flag_1);


    return 0;
}
