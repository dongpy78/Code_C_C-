#include <stdio.h>
int A[20];
int n, k;
void tg(int n, int k) {
  A[0] = 1;
  for(int i = 1; i <= n; i++)
    for(int j = k; j > 0; j--)
      A[j] = A[j] + A[j-1];
}


int main() {
  n = 5; k = 3;
  tg(n, k);
  printf("\nTo hop chap %d cua %d = %d", k, n, A[k]);
  return 0;
}