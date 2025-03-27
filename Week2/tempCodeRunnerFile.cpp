void merge(int a[],int n,int b[],int m,int c[]){
    int i = 0, j = 0, k = 0;
    while (i < n && j < m){
        if (a[i] < b[j]){
            c[k] = a[i];
            i++;
            k++;
        } else {
            c[k] = b[j];
            j++;
            k++;
        }
    }
    int tmp1 = n - i;
    int tmp2 = m - j;
    if (tmp1 != 0){
        while (i < n){
            c[k] = a[i];
            k++;
            i++;
        }
    }
    if (tmp2 != 0){
        while (j < n){
            c[k] = b[j];
            k++;
            j++;
        }
    }
}