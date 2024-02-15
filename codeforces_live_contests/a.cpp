//Adib Sakhawat - sakhadib
//IUT, 2024
typedef long long ll;
ll inf = 1e9;
ll neg_inf = -1e9;

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Redirect input from input.txt
    ifstream in("../input.txt");
    cin.rdbuf(in.rdbuf());

    // Redirect output to output.txt
    ofstream out("../output.txt");
    cout.rdbuf(out.rdbuf());

    int t;
    cin >> t;
    while(t--){
        int hash;
        cin >> hash;

        string s = "";

        if(hash == 3){
            s = "aaa";
        }
        else if(hash == 78){
            s = "zzz";
        }
        else if(hash > 52){
            int x = hash - 52;
            char c = 'a' + (x - 1);
            s += c;
            s += "zz";
        }
        else if(hash <= 52 && hash > 26){
            s+= "a";
            int x = hash - 26;
            char c = 'a' + (x-2);
            s += c;
            s += "z";

            if(x == 1){
                s = "aay";
            }
        }
        else if(hash <= 26){
            s += "aa";
            char c = 'a' + (hash - 3);
            s += c;

            if(hash == 26){
                s = "aax";
            }
            if(hash == 25){
                s = "aaw";
            }
        }


        cout << s << endl;
    }

    
    return 0;
}