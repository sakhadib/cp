//Sakhawat Adib
//4 Mar, 2023       Islamic University of Technology

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x;
        cin >> x;
        if(x%3==0)
        {
            cout << x/3 << " " << x/3 << endl;
        }
        else
        {
            if((x-1)%3==0)
            {
                cout << ((x-1)/3)+1 << " " << ((x-1)/3) << endl;
            }
            else
            {
                cout << ((x-2)/3) << " " << ((x-2)/3)+1 << endl;
            }
        }
    }
    return 0;
}