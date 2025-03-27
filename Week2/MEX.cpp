#include <bits/stdc++.h>
using namespace std;
int partition(vector <int> &a, int left, int right){
    int pivot = a[right];
    int i = left - 1;
    for (int j = left; j < right; j++)
    {
        if (a[j] < pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[right]);
    return i + 1;
}
void quicksor(vector <int> &a, int left, int right){
    if (left < right){
        int pi = partition(a,left,right);
        quicksor(a,left,pi - 1);
        quicksor(a,pi + 1,right);
    }
}
int main(){
    freopen("MEX.inp","r",stdin);
    freopen("MEX.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector <int> a(n);
    // vector <bool> dem(1e9,false);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // dem[a[i]] = true;
    }
    quicksor(a,0,n-1);
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x){
            x++;
        } else if (a[i] > x){
            break;
        }
    }
    cout << x;
}