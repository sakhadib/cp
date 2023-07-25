//Sakhawat Adib
//mar 9, 2023   ||   IUT   ||    Bangladesh
 
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int x;
    cin >> x;
    while(x--)
    {
        string s;
        int k;
        cin >> k;
        cin >> s;
        string t = "Timur";
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s==t)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

 
    return 0;
}