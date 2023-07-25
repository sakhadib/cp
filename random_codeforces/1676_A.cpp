//Sakhawat Adib
//feb 27, 2023   ||   IUT   ||    Bangladesh
 
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int x;
    cin >> x;
    while(x--)
    {
        char s[6];
        int sum_1 = 0, sum_2 = 0;
        scanf("%s",s);

        for(int i=0; i<3; i++)
        {
            sum_1 = sum_1 + (s[i] - '0');
        }
        for(int i=5; i>2; i--)
        {
            sum_2 = sum_2 + (s[i] - '0');
        }

        if(sum_1 == sum_2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

 
    return 0;
}