//Adib Sakhawat - sakhadib
//IUT, 2024
typedef long long ll;
ll inf = 1e9;
ll neg_inf = -1e9;

#include <bits/stdc++.h>
using namespace std;

void bfs_level_detector(vector<vector<int> > &graph, vector<int> &level, int start){
    queue<int> q;
    q.push(start);
    level[start] = 0;

    while(!q.empty()){
        int cur = q.front();
        q.pop();

        for(int i = 0; i < graph[cur].size(); i++){
            int nxt = graph[cur][i];
            if(level[nxt] == -1){
                level[nxt] = level[cur] + 1;
                q.push(nxt);
            }
        }
    }
}

int main() {
    // Redirect input from input.txt
    ifstream in("../input.txt");
    cin.rdbuf(in.rdbuf());

    // Redirect output to output.txt
    ofstream out("../output.txt");
    cout.rdbuf(out.rdbuf());

    int n,m;

    cin >> n >> m;

    vector<vector<int> >graph(n+1);
    vector<int> level(n+1, -1);

    for(int i = 0; i < m; i++){
        int a,b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    bfs_level_detector(graph, level, 1);

    // for(int i = 1; i <= n; i++){
    //     cout << level[i] << " ";
    // }

    if(level[n] == 2){
        cout << "POSSIBLE" << endl;

    }else{
        cout << "IMPOSSIBLE" << endl;
    }
    
    // cout << level[n];
    return 0;
}