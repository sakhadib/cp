//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>

using namespace std;

int main() {
    // // Redirect input from input.txt
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    // // Redirect output to output.txt
    // ofstream out("output.txt");
    // cout.rdbuf(out.rdbuf());

    int n, m;
    cin >> n >> m;

    map<string, string> mp;
    for (int i = 0; i < m; i++) {
        string a, b;
        cin >> a >> b;
        if (a.size() > b.size()){
            mp[a] = b;
        } 
        else{
            mp[b] = a;
        }
    }

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (mp.count(s) > 0){
            cout << mp[s] << " ";
        }
        else{
            cout << s << " ";
        }
    }


    
    return 0;
}