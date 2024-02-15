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

    string s;
    cin >> s;

    int max_count = 1;
    int count = 1;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i-1]) {
            count++;
            max_count = max(max_count, count);
        } 
        else {
            count = 1;
        }
    }

    cout << max_count << endl;

    
    return 0;
}