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
    while(n--){
        ll r, c;
        cin >> r >> c;

        ll ans;

        if(r == c){
            ans = r*r - (r-1);
        }
        else if(r > c){
            if(r % 2 == 0){
                ll k = r*r - (r-1);
                ans = k + (r-c);
            }
            else{
                ll k = r*r - (r-1);
                ans = k - (r-c);
            }
        }

        else{
            if(c % 2 == 0){
                ll k = c*c - (c-1);
                ans = k - (c-r);
            }
            else{
                ll k = c*c - (c-1);
                ans = k + (c-r);
            }
        }

        cout << ans << endl;
    }

    
    
    return 0;
}