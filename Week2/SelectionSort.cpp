#include <bits/stdc++.h>
using namespace std;
// Độ phức tạp O(n^2)
void SelectionSort(vector <int> &a){
    int n = a.size();
    for (int i = 0; i < n - 1; i++)
    {
        // Giả sử phần tử đầu tiên là nhỏ nhất
        int min_idx = i;
        // sau đó duyệt qua n - 1 phần tử còn lại của mảng
        for (int j = i + 1; j < n; j++)
        {
            // nếu tìm thấy phần tử nhỏ hơn phần tử mình chọn trước đó thì lưu lại vị trí
            if (a[j] < a[min_idx]){
                min_idx = j;
            }
        }
        // sau đó đổi chổ
        int tmp1 = a[i], tmp2 = a[min_idx];
        swap(a[i], a[min_idx]);
        if (tmp1 == a[i] && tmp2 == a[min_idx]){
            continue;
        } 
        for (auto x : a){
            cout << x << " ";
        }
        cout << "\n";
    }
    
}
int main(){
    freopen("selectionsort.inp","r",stdin);
    freopen("selectionsort.out","w",stdout);
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
    SelectionSort(a);
}