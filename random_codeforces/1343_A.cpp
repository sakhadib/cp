//sakhawat adib
//4 mar, 2023       IUT, Dhaka
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int a;
        cin>>a;
        for(int i=2; i<10e9; i++)
        {
            int p = pow(2,i) - 1;
            if(a%p==0)
            {
                cout<<a/p<<endl;
                break;
            }
        }
    }
}