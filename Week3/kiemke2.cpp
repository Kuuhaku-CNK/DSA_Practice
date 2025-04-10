#include <bits/stdc++.h>
using namespace std;
int partition(vector<string> &v, int low, int high) {
    string pivot = v[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (v[j].size() < pivot.size() || (v[j].size() == pivot.size() && v[j] < pivot)) {
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i + 1], v[high]);
    return (i + 1);
}

void sap_xep(vector<string> &v, int low, int high) {
    if (low < high) {
        int pi = partition(v, low, high);
        sap_xep(v, low, pi - 1);
        sap_xep(v, pi + 1, high);
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<string> s(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
    }
    sap_xep(s, 1, n);
    vector<vector<string>> adj(n + 1);
    int i = 1;
    while (i <= n) {
        int j = i;
        while (j <= n && s[i] == s[j]){
            j++;
        }
        adj[j - i].push_back(s[i]);
        i = j;
    }
    for (int i = n; i >= 0; i--) {
        if (!adj[i].size()) continue;
        for (auto it : adj[i]) {
            cout << it << " " << i << "\n";
        }
    }
}
