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

    int t; //test case
    cin >> t; //input test case
    while(t--){
        int b, c, h; //bread, cheese, ham
        cin >> b >> c >> h; //input bread, cheese, ham

        int bread = b; //bread
        int cheese = c + h; //cheese
        int ans = 0; //answer
        if(bread > cheese)  //if bread is greater than cheese
        {
            ans = (cheese*2) + 1; //answer
        }
        else{
            ans = (bread*2) - 1; //answer
        }

        cout << ans << endl; //output answer
    }

   return 0;
}