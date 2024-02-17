//Adib Sakhawat - sakhadib
//IUT, 2024
typedef long long ll;
ll inf = 1e9;
ll neg_inf = -1e9;
#define mod 1000000007

#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second < b.second;
}



int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
    map<int, int> mp;
    for (int i = 0; i < arr.size(); i++) {
        mp[arr[i]]++;
    }

    vector<pair<int, int> > nums;
    for (map<int, int>::iterator it = mp.begin(); it != mp.end(); ++it) {
        nums.push_back(make_pair(it->first, it->second));
    }

    sort(nums.begin(), nums.end(), cmp);

    int n = nums.size();

    // for(int i=0; i<n; i++){
    //     cout << nums[i].first << " " << nums[i].second << endl;
    // }

    // cout << "-----------------" << endl;

    for(int i=0; i<k; i++){
        if(nums[i].second <= k){
            k -= nums[i].second;
            nums[i].second = 0;   
        }
        else{
            nums[i].second -= k;
            k = 0;
        }
    }

    // for(int i=0; i<n; i++){
    //     cout << nums[i].first << " " << nums[i].second << endl;
    // }

    int count = 0;

    for(int i=0; i<n; i++){
        if(nums[i].second > 0){
            count++;
        }
    }

    return count;
    

}

int main() {
    // Redirect input from input.txt
    ifstream in("../input.txt");
    cin.rdbuf(in.rdbuf());

    // Redirect output to output.txt
    ofstream out("../output.txt");
    cout.rdbuf(out.rdbuf());


    vector<int> arr;
    while(!cin.eof()){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int k = 3;

    cout << findLeastNumOfUniqueInts(arr, k);
    return 0;
}