#include <bits/stdc++.h>
using namespace std;
struct type{
    int x,y;
};
bool compare(type a,type b){
    if (a.x != b.x){
        return a.x < b.x;
    } 
    return a.y < b.y;
}
int partition(vector <type> &v, int low, int high) {
    type pivot = v[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (compare(v[j],pivot)) {
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i + 1], v[high]);
    return (i + 1);
}
void sap_xep(vector<type> &v, int low, int high) {
    if (low < high) {
        int pi = partition(v, low, high);
        sap_xep(v, low, pi - 1);
        sap_xep(v, pi + 1, high);
    }
}
int binary_search_first(vector <type> &v,int target,int left,int right){
    int ans = -2;
    while (left <= right){
        int mid = left + (right - left)/2;
        if (v[mid].x == target){
            ans = v[mid].y;
            right = mid - 1;
        } else if (v[mid].x < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return ans;
}
int binary_search_last(vector <type> &v,int target,int left,int right){
    int ans = -2;
    while (left <= right){
        int mid = left + (right - left)/2;
        if (v[mid].x == target){
            ans = v[mid].y;
            left = mid + 1;
        } else if (v[mid].x < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return ans;
}
int main(){
    freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin >> n >> q;
    vector <type> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].x;
        a[i].y = i;
    }
    sap_xep(a,0,n-1);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i].x << " " << a[i].y << endl;
    // }
    for (int i = 0; i < q; i++)
    {
        string s;
        int c,v;
        cin >> s >> c >> v;
        if (c == 1){
            cout << binary_search_first(a,v,0,n-1) + 1 << endl;
        } else {
            cout << binary_search_last(a,v,0,n-1) + 1 << endl;
        }
    }
    
}