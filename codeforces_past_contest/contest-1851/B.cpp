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

    int t; // number of test cases
    cin >> t;
    while(t--){
        vector<int> v1, v2; // v1 = input vector, v2 = sorted vector
        bool flag = true; // flag = true if the vector is sorted, false otherwise
        int n; // size of the vector
        cin >> n;
        for(int i = 0; i < n; i++){
            int x; // input
            cin >> x;
            v1.push_back(x); // push input to the vector
            v2.push_back(x); // push input to the vector    
        }

        sort(v2.begin(), v2.end()); // sort the vector

        for(int i=0; i<n; i++){
            if(v1[i]%2 != v2[i]%2) // if the parity of the input vector and the sorted vector is not the same, then the vector is not sorted
            {
                flag = false; // set flag to false
                break; // break the loop
            }
        }

        if(flag) cout << "YES" << endl; // if the vector is sorted, print YES
        else cout << "NO" << endl; // otherwise, print NO

    }
    return 0;
}