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


    int n;
    cin >> n;

    vector<int> arr(n+1, 0);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr[x] = 1;
    }
    
    for (int i = 1; i <= n; i++) {
        if (arr[i] == 0) {
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}