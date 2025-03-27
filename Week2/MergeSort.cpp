#include <bits/stdc++.h>
using namespace std;
int n;
void merge(vector <int> &a, int left, int mid, int right){
    int n1 = mid - left + 1; // số phần tử của mảng đầu tiên
    int n2 = right - mid;
    vector <int> L(n1),R(n2);
    for (int i = 0; i < n1; i++){
        L[i] = a[left + i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = a[mid + 1 + j];
    }
    int i = 0, j = 0;
    int k = left;
    while (i < n1 && j < n2){
        if (L[i] <= R[j]){
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1){
        a[k] = L[i];
        i++;
        k++;
    }
    while (j < n2){
        j++;
        k++;
    }
    for (int i = 0; i < n; i++)
    {
        if (i == left){
            cout << "[ ";
            cout << a[i] << " ";
        } else if (i == left + n1 + n2 - 1){
            cout << a[i] << " ";
            cout << "] ";
        } else {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}
// Độ phức tạp O(n*log(n))
void MergeSort(vector <int> &a, int left, int right){
    if (left >= right)
        return;
    // tránh tràn số
    int mid = left + (right - left)/2;
    MergeSort(a,left,mid);
    MergeSort(a,mid+1,right);
    merge(a,left,mid,right);
}
int main(){
    freopen("mergesort.inp","r",stdin);
    freopen("mergesort.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    vector <int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    MergeSort(a,0,n-1);
}