//Adib Sakhawat - sakhadib
//IUT, 2024
typedef long long ll;
ll inf = 1e9;
ll neg_inf = -1e9;

#define mod 1000000007

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

    ll ans = 1;

    for(ll i=0; i<n; i++){
        ans *= 2;
        ans %= mod;
    }

    cout << ans << endl;

    
    return 0;
}