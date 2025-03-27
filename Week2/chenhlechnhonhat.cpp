#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("chenhnhonhat.inp","r",stdin);
    freopen("chenhnhonhat.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector <int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    int min_diff = 1e9;
    for (int i = 1; i < n; i++)
    {
        min_diff = min(min_diff,a[i] - a[i-1]);
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[i-1] == min_diff){
            cout << a[i-1] << " " << a[i] << " ";
        }
    }
}