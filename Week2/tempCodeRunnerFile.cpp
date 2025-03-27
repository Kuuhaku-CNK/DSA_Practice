#include <bits/stdc++.h>
using namespace std;
// Độ phức tạp O(n^2)
void InsertionSort(vector <int> &a){
    int n = a.size();
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;
        // Điều kiện là j lớn hơn phần tử key và chưa chạy về đầu mảng
        while (j >= 0 && a[j] > key){
            // Dời vị trí của phần tửtrước đó lên 1 vị trí
            a[j+1] = a[j];
            j--;
            for (auto x : a){
                cout << x << " ";
            }
            cout << '\n';
        }
        // Gán phần tử 
        a[j+1] = key;
    }
}
int main(){
    freopen("insertionsort.inp","r",stdin);
    freopen("insertionsort.out","w",stdout);
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
    InsertionSort(a);
}