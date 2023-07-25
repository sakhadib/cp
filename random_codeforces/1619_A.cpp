//sakhawat adib
//5 mar, 2023       IUT, Dhaka
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a;
        cin >> a;
        bool flag = true; 
 
        int len = a.length();
        //cout << len << endl;
        if(len%2 == 0)
        {
            int len_2 = len/2;
            for(int i=0; i<len_2; i++)
            {
                if (a[i] != a[len_2+i])
                {
                    flag = false;
                    break;
                }
                
            }
        }
        else
            flag = false;
 
        if(flag)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }
 
    return 0;
}