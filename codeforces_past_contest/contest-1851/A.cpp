//Adib Sakhawat - sakhadib
//IUT, 2023

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Redirect input from input.txt
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());

    // Redirect output to output.txt
    ofstream out("output.txt");
    cout.rdbuf(out.rdbuf());

    int t; // number of test cases
    cin >> t;
    while (t--) 
    {
        int n,m,k,H; // n = number of houses, m = number of houses per street, k = number of streets, H = height of the house
        int count = 0;
        // string s = "";
        cin >> n >> m >> k >> H; // input n, m, k, H
        for (int i = 0; i < n; i++)
        {
            int h; 
            cin >> h;

            if(h != H){
                if((H-h) % k == 0){
                if(h < H){
                    int k2 = (H-h);
                    if(k2 < k*m){
                        count++;
                        
                        // if (!s.empty()) s += ", ";
                        // // Use stringstream to convert h to string
                        // stringstream ss;
                        // ss << h;
                        // s += ss.str(); // Append the value of h to the string s
                    }
                }
                else{
                    int k2 = (h-H);
                    if(k2 < k*m){
                        count++;

                        // if (!s.empty()) s += ", ";
                        // // Use stringstream to convert h to string
                        // stringstream ss;
                        // ss << h;
                        // s += ss.str(); // Append the value of h to the string s
                    }
                }
            }
            }

            
        }
        cout << count << endl; 

    }
    


    
    return 0;
}