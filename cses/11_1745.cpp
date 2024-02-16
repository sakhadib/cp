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

    ll t;
    cin >> t;
    while(t--){
        ll x, y;
        cin >> x >> y;
        if((x+y)%3 != 0 || x > 2*y || y > 2*x){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }


    
    return 0;
}