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
int partition(vector <point_2D> &a, int left, int right){
    point_2D pivot = a[right];
    int i = left - 1;
    for (int j = left; j < right; j++)
    {
        if (compare(a[j], pivot)){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[right]);
    return i + 1;
}
void quicksor(vector <point_2D> &a, int left, int right){
    if (left < right){
        int pi = partition(a,left,right);
        quicksor(a,left,pi - 1);
        quicksor(a,pi + 1,right);
    }
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
    quicksor(a,0,n-1);
    for (auto d : a){
        cout << d.x << " " << d.y << "\n";
    }
}