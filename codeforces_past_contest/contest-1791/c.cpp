//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>

using namespace std;

int main() {
    // // Redirect input from input.txt
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    // // Redirect output to output.txt
    // ofstream out("output.txt");
    // cout.rdbuf(out.rdbuf());

    int t;
    cin >> t; //test case
    while (t--)
    {
        int n; //length of string
        cin >> n; 
        string s; //string
        cin >> s;
        if(n==0 || (n==2 && s[0]!=s[1])) //if string is empty or length is 2 and both character is not same
        {
            cout << "0" << endl; //print 0
        }
        else
        {
            int count = 0; //count
            for(int i=0; i<n/2; i++) //loop through half of the string
            {
                if(s[i]!=s[n-i-1]) //if character is not same
                {
                    count = count + 2; //increase count by 2
                }
                else{
                    break; //else break
                }
            }
            cout << n - count << endl; //print n - count
        }
        
    }
    return 0;
}