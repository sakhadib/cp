//Adib Sakhawat - sakhadib
//IUT, 2024
typedef long long ll;
ll inf = 1e9;
ll neg_inf = -1e9;
#define mod 1000000007

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Redirect input from input.txt
    ifstream in("../input.txt");
    cin.rdbuf(in.rdbuf());

    // Redirect output to output.txt
    ofstream out("../output.txt");
    cout.rdbuf(out.rdbuf());

    string s;
    cin >> s;

    int n = s.size();

    map<char, int> mp;
    for (int i = 0; i < n; i++) {
        mp[s[i]]++;
    }
    bool possible = true;
    string ans = "";

    for (map<char, int>::iterator it = mp.begin(); it != mp.end(); ++it) {
        cout << it->first << " " << it->second << endl;
        if(it->second % 2 != 0) {
            possible = false;
            break;
        }
    }
    

    if(possible == false){
        cout << "NO SOLUTION" << endl;
    }
    else{
        string first = "";
        string second = "";
        for (map<char, int>::iterator it = mp.begin(); it != mp.end(); ++it) {
            for (int i = 0; i < it->second / 2; i++) {
                first += it->first;
                second += it->first;
            }
        }
        reverse(second.begin(), second.end());
        cout << first + second << endl;
    }


    
    return 0;
}