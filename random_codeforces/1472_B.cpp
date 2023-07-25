//Sakhawat Adib
//4 Mar, 2023       Islamic University of Technology

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,cnt1 = 0,cnt2 = 0,sum = 0;
        cin >> a;
        int arr[a];
        for (int i = 0; i < a; i++) 
        {
            int x;
            cin >> x;
            sum += x;
            if (x == 1) {
                cnt1++;
            } else {
                cnt2++;
            }
        }
        if (sum % 2 == 1)
        {
            cout << "NO" << endl;
        } 
        else 
        {
            bool possible = false;
            for (int i = 0; i <= cnt2; i++) 
            {
                int rem = sum/2 - i*2;
                if (rem >= 0 && rem <= cnt1) 
                {
                    possible = true;
                    break;
                }
            }
            if (possible) 
            {
                cout << "YES" << endl;
            } 
            else 
            {
                cout << "NO" << endl;
            }
        }
    }
}
