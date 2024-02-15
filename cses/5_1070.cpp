//Adib Sakhawat - sakhadib
//IUT, 2024
typedef long long ll;
ll inf = 1e9;
ll neg_inf = -1e9;

#include <bits/stdc++.h>
using namespace std;

int main() {
    // // Redirect input from input.txt
    // ifstream in("../input.txt");
    // cin.rdbuf(in.rdbuf());

    // // Redirect output to output.txt
    // ofstream out("../output.txt");
    // cout.rdbuf(out.rdbuf());

    ll n;
    cin >> n;

    if(n < 4 && n > 1){
        cout << "NO SOLUTION" << endl;
    }

    else if(n == 1){
        cout << 1 << endl;
    }

    else{
        for(ll i = 2; i <= n; i += 2){
            cout << i << " ";
        }

        for(ll i = 1; i <= n; i += 2){
            cout << i << " ";
        }
    }


    
    return 0;
}