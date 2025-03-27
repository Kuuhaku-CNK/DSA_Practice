#include <bits/stdc++.h>
using namespace std;
int n;
struct point_3D{
    int x,y,z;
};
bool compare(point_3D a, point_3D b){
    if (a.x != b.x){
        return a.x < b.x;
    }
    if (a.y != b.y){
        return a.y > b.y;
    }
    return a.z < b.z;
}
int partition(vector <point_3D> &a, int left, int right){
    point_3D pivot = a[right];
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
void quicksor(vector <point_3D> &a, int left, int right){
    if (left < right){
        int pi = partition(a,left,right);
        quicksor(a,left,pi - 1);
        quicksor(a,pi + 1,right);
    }
}
int main(){
    freopen("point3D.inp","r",stdin);
    freopen("point3D.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    vector <point_3D> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i].x >> a[i].y >> a[i].z;
    }
    quicksor(a,0,n-1);
    for (auto d : a){
        cout << d.x << " " << d.y << " " << d.z << "\n";
    }
}