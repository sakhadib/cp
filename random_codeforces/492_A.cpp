#include<bits/stdc++.h>
using namespace std;

int main()
{
    int inp, count = 0, exist = 0, chk = 0; 
    cin >> inp;

    for(int i=1; i<10*inp; i++)
    {
        exist = exist + i;
        chk = chk + exist;
        if(chk <= inp)
        {
            count++;
        }
        else
        {
            cout << count;
            break;
        }

    }
}


