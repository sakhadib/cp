//sakhawat adib
//mar 11, 2023       IUT, Dhaka

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string codeforces = "codeforces";
    cin >> t;
    while(t--)
    {
        char q;
        cin >> q;

        if(codeforces.find(q)<codeforces.length())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO"<<endl;
        }

    }
    return 0;
}