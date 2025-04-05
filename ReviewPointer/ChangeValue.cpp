#include <bits/stdc++.h>
using namespace std;
int main(){
    int var = 5;
    int* p = &var;
    *p = 1;
    // the value will be change 
    cout << var << endl;
}