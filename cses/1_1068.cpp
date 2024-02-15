//Adib Sakhawat - sakhadib
//IUT, 2024
typedef long long ll;
ll inf = 1e9;
ll neg_inf = -1e9;

#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> memo; // Declaration of the memoization map

int simulateAlgorithm(int n) {
    if (memo.find(n) != memo.end()) {
        return memo[n]; // If n is already calculated, return the cached result
    }

    // Base case: if n is 1, return 1
    if (n == 1) {
        return 1;
    }

    // If n is even, divide it by 2
    if (n % 2 == 0) {
        return memo[n] = simulateAlgorithm(n / 2);
    } else { // If n is odd, multiply it by 3 and add 1
        return memo[n] = simulateAlgorithm(n * 3 + 1);
    }
}

int main() {
    // Redirect input from input.txt
    ifstream in("../input.txt");
    cin.rdbuf(in.rdbuf());

    // Redirect output to output.txt
    ofstream out("../output.txt");
    cout.rdbuf(out.rdbuf());

    int n;
    cin >> n;

    // Simulate the algorithm and print all the values of n until it reaches 1
    while (true) {
        cout << n << " ";
        if (n == 1) {
            break;
        }
        n = simulateAlgorithm(n);
    }

    return 0;
}