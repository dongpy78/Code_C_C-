// Viết bằng C
#include <stdio.h>
int a[] = {20, 75, 42, 25, 19, 50, 40, 13, 80, 15, 35, 45};
// int a[] = {3, 10, 45, 20, 68, 43};
int n = sizeof(a) / sizeof(a[0]);

void quick_sort(int a[], int l, int r) {
  int k; int j; int m; int tam;
  int key;
  if(l < r) {
    m = (l+r) / 2;
    key = a[m];
    k = l; j = r;
    while(k < j) {
      while(a[k] < key)
       k = k + 1;
      while(a[j] > key)
        j = j - 1;
      if(k <= j) {
        tam = a[j];
        a[j] = a[k];
        a[k] = tam;
        k = k + 1;
        j = j - 1;
      }
    }
    if(k < r)
      quick_sort(a, k, r);
    if(j > l)
      quick_sort(a, l, j);
  }
}

int main() {
  quick_sort(a, 0, n-1);
  int k;
  printf("\n");
  for(k = 0; k < n; k++)
    printf("%3d", a[k]);
  return 0;
}