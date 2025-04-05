#include <bits/stdc++.h>
using namespace std;
int main(){
    int *ptr;
    int arr[5];
    arr[0] = 3;
    ptr = arr;
    // it will print the first element of the array
    cout << arr[0] << endl;
    cout << *ptr << endl;
    // ptr + i is equivalent to &arr[i]
    // so we can access the value be using dereference operator
    // *(ptr + i) is equivalent to arr[i]
    cout << *(ptr + 0) << endl;
    // also the same with subtract
}