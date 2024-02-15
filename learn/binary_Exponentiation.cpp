//Adib Sakhawat - sakhadib
//IUT, 2024
typedef long long ll;
ll inf = 1e9;
ll neg_inf = -1e9;

#include <bits/stdc++.h>
using namespace std;

ll power(ll a, ll b) {
    if(b == 0) {
        return 1;
    }

    ll res = power(a, b / 2);

    if(b % 2 == 0) {
        return res * res;
    } 
    else {
        return res * res * a;
    }
}

ll normPower(ll a, ll b) {
    ll res = 1;
    for (ll i = 0; i < b; i++) {
        res *= a;
    }

    return res;
}

int main() {
    // Redirect input from input.txt
    ifstream in("../input.txt");
    cin.rdbuf(in.rdbuf());

    // Redirect output to output.txt
    ofstream out("../output.txt");
    cout.rdbuf(out.rdbuf());

    vector<int> X;
    vector<int> Y;

    int t;
    cin >> t;
    while(t--){
        ll base, exp;
        cin >> base >> exp;

        exp = 10000;

        clock_t start = clock();
        ll res = normPower(base, exp);
        clock_t end = clock();

        // clock_t start = clock();
        // ll res2 = power(base, exp);
        // clock_t end = clock();


        double cpu_time_used = ((double) (end - start));

        X.push_back(base);
        Y.push_back(cpu_time_used);



    }

    for(int i=0; i<X.size(); i++){
        cout << X[i] << ", ";
    }

    cout << endl;

    for(int i=0; i<Y.size(); i++){
        cout << Y[i] << ", ";
    }


    
    return 0;
}