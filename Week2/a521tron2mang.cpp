void merge(int *a,int n,int *b,int m,int *c){
    int i = 0, j = 0, k = 0;
    while (i < n && j < m){
        if (a[i] < b[j]){
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
    while (i < n) c[k++] = a[i++];
    while (j < m) c[k++] = b[j++];
}