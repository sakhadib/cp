//Adib Sakhawat - sakhadib
//IUT, 2024
typedef long long ll;
ll inf = 1e9;
ll neg_inf = -1e9;
#define mod 1000000007

#include <bits/stdc++.h>
using namespace std;

void solution(ll n){
    ll totalCodes = pow(2, n);

    for(ll i=0; i<totalCodes; i++){
        ll grayCode = i ^ (i >> 1);
        bitset<32> b(grayCode);
        string s = b.to_string();
        cout << s.substr(32-n) << endl;
    }
}

int main() {
    // // Redirect input from input.txt
    // ifstream in("../input.txt");
    // cin.rdbuf(in.rdbuf());

    // // Redirect output to output.txt
    // ofstream out("../output.txt");
    // cout.rdbuf(out.rdbuf());

    ll n;
    cin >> n;

    solution(n);


    
    return 0;
}