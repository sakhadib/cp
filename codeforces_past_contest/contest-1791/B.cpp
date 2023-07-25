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
    while(t--){
        int n; // length of string
        cin >> n;
        string s; // string
        cin >> s;
        int x=0,y=0; // x and y coordinate
        bool flag = false; // flag to check if x=1 and y=1

        for(int i=0;i<n;i++){
            if(s[i]=='L'){
                x--; // x coordinate decreases
            }
            else if(s[i]=='R'){
                x++; // x coordinate increases
            }
            else if(s[i]=='U'){
                y++; // y coordinate increases
            }
            else if(s[i]=='D'){
                y--; // y coordinate decreases
            }

            if(x==1 && y==1){
                flag = true; // if x=1 and y=1 then flag is true
                break; // break the loop
            }
        }

        if(flag){
            cout << "YES" << endl; // if flag is true then print YES
        }
        else{
            cout << "NO" << endl; // if flag is false then print NO
        }


    }
    return 0; 
}