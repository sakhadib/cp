//sakhawat adib
//5 mar, 2023       IUT, Dhaka
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    char c;
    bool flag = false;
    cin >> m >> n;
    for(int i = 0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> c;
            if(c == 'C' || c == 'M' || c == 'Y')
            {
                flag = true;
                break;
            }
        }
    }

    if(flag)
    {
        cout << "#Color";
    }
    else
    {
        cout << "#Black&White";
    }
    return 0;
}