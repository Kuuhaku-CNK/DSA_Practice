#include <bits/stdc++.h>
using namespace std;
bool prime(int n){
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0){
            return false;        
        }
    }
    return true;
}
int is_next_prime(int n){
    n++;
    while (!prime(n)){
        n++;
    }
    return n;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin >> n >> m;
    int tmp = is_next_prime(n);
    if (tmp == m){
        cout << "YES";
    } else {
        cout << "NO";
    }
}