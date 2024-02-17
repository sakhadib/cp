//Adib Sakhawat - sakhadib
//IUT, 2024
typedef long long ll;
ll inf = 1e9;
ll neg_inf = -1e9;
#define mod 1000000007

#include <bits/stdc++.h>
using namespace std;

void solved(vector<pair<int, int> >& arr, int n, int from, int to, int aux){
    if(n == 1){
        arr.push_back(make_pair(from, to));
        return;
    }
    solved(arr, n-1, from, aux, to);
    arr.push_back(make_pair(from, to));
    solved(arr, n-1, aux, to, from);
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

    vector<pair<int, int> > x;
    solved(x, n, 1, 3, 2);
    cout << x.size() << endl;

    for(int i=0; i<x.size(); i++){
        cout << x[i].first << " " << x[i].second << endl;
    }


    
    return 0;
}