#include <bits/stdc++.h>
using namespace std;
void find_first_and_last_elements(int n,int min_val,vector <int> &a,vector <int> &first, vector <int> &last){
    for (int i = 0; i < n; i++)
    {
        int normalize = a[i] - min_val;
        if (first[normalize] == -1){
            first[normalize] = i;
        }
        last[normalize] = i;
    }
}
int main(){
    freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin >> n >> q;
    vector <int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int max_val = *max_element(a.begin(),a.end());
    int min_val = *min_element(a.begin(),a.end());
    int range = max_val - min_val + 1;
    vector <int> first(range,-1);
    vector <int> last(range,-1);
    find_first_and_last_elements(n,min_val,a,first,last);
    for (int i = 0; i < q; i++)
    {
        string s;
        int x,y;
        cin >> s >> x >> y;
        y = y - min_val;
        if (x == 1){
            if (first[y] != -1){
                cout << first[y] + 1<< endl;
            } else {
                cout << - 1 << endl;
            }
        } else {
            if (last[y] != -1){
                cout << last[y] + 1 << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }
    
}