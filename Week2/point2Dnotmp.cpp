#include <bits/stdc++.h>
using namespace std;
int n;
struct point_2D{
    int x,y;
};
bool compare(point_2D a, point_2D b){
    if (a.x != b.x){
        return a.x < b.x;
    }
    return a.y > b.y;
}
int main(){
    freopen("point2D.inp","r",stdin);
    freopen("point2D.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    vector <point_2D> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i].x >> a[i].y;
    }
    sort(a.begin(),a.end(),compare);
    for (auto d : a){
        cout << d.x << " " << d.y << "\n";
    }
}