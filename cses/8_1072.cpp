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

    cout << 0 << endl;

    for(ll i=2; i<= n; i++){
        cout << (i*i) * (i*i-1) / 2 - 4*(i-1)*(i-2) << endl;
    }


    
    return 0;
}