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

    ll sum = n * (n + 1) / 2;

    if(sum % 2 == 0){
        cout << "YES" << endl;
        vector<ll> a, b;
        ll target = sum / 2;
        for(ll i = n; i >= 1; i--){
            if(target - i >= 0){
                a.push_back(i);
                target -= i;
            }else{
                b.push_back(i);
            }
        }
        cout << a.size() << endl;
        for(ll i = 0; i < a.size(); i++){
            cout << a[i] << " ";
        }
        cout << endl;
        cout << b.size() << endl;
        for(ll i = 0; i < b.size(); i++){
            cout << b[i] << " ";
        }
        cout << endl;

    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}