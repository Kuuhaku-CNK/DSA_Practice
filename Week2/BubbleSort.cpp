#include <bits/stdc++.h>
using namespace std;
// Độ phức tạp O(n^2)
void BubbleSort(vector <int> &a){
    int n = a.size();
    bool swapped;
    for (int i = 0; i < n - 1; i++)
    {
        // phần tử swapped này để check xem coi mảng đã được sort hết chưa
        swapped = false;
        for (int j = 0; j < n-i-1; j++)
        {
            // Đổi phần tử thứ j với phần tử tiếp theo là j + 1 nếu giá trị lớn hơn
            if (a[j] > a[j+1]){
                swap(a[j],a[j+1]);
                swapped = true;
                for (auto x : a){
                    cout << x << " ";
                }
                cout << endl;
            }
        }
        // Nếu mảng ko đc swap lần nào nữa thì có nghĩ là nó đã sort xong
        if (!swapped){
            break;
        }
    }
}
int main(){
    freopen("bubblesort.inp","r",stdin);
    freopen("bubblesort.out","w",stdout);
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
    BubbleSort(a);
}