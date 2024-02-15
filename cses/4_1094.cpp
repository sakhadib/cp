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

    ll move_count = 0;

    vector<ll> arr(n+1, 0);
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        arr[i] = x;
    }


    for (ll i = 1; i < n; i++) {
        if (arr[i] < arr[i-1]) {
            move_count += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }

    cout << move_count << endl;
    
    return 0;
}