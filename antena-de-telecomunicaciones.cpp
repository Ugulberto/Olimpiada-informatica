#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int pasos;
    cin >> pasos;
    int p = pasos;
    vector<vector<int>> g((pasos + 1)*2);
    map<string, int> m;
    vector<int> dist((pasos+1)*2, -1);
    m[a] = 0;
    m[b] = pasos*2;
    dist[0] = 0;
    for (int i = 1; i <= (pasos)*2; i+=2) {
        string x, y;
        cin >> x >> y;
        if (m.count(x) == 0) {
            m.insert({x, i});
            if (m.count(y) == 0) {
                m.insert({y, i+1});
            }
        } else {
            m.insert({y, i});
        }
        g[m[x]].push_back(m[y]); 
        g[m[y]].push_back(m[x]); 
    }
/*
    for (auto a : m){
        cout << a.first << " "<< a.second << "\n";
    }*/
/*
    for (int i = 0; i < g.size(); i++){
        cout << i << "-> ";
        for (auto e : g[i]) {
            cout << e << " ";
        }
        cout << endl;
    }
*/
    queue<int> q;
    q.push(0);
    while (!q.empty()) {
        int n = q.front();
        q.pop();
        for (int w : g[n]) {
            //cout << n << " " << w << endl;
           // cout << dist[w] << endl;
            if (dist[w] == -1) {
                dist[w] = dist[n]+1;
                //cout << "Vistado> " << w << "\n";
                q.push(w);
            }
        }
    }
    int n = dist[dist.size()-2] == -1 ? -1 : dist[dist.size()-2]-1;
    cout << n << "\n";
    return 0;
}