// Tính Tổ Hợp Chập K của N sử dụng tam giác Pascal
#include <stdio.h> 
int n, k;
int tg[20][20];
void tgpc(int n) {
  for(int i = 0; i <= n; i++) {
    tg[i][0] = 1; // Cac phan tu cot 0
    tg[i][i] = 1; // Cac phan tu duong cheo chinh
    for(int i = 2; i <= n; i++) { // Tinh cac phan tu tu dong 2 den dong n
      for(int j = 1; j < i; j++) // Cot tu 1 den i - 1
        tg[i][j] = tg[i-1][j-1] + tg[i-1][j];
    }
  }
}

int main() {
  n = 5; k = 3;
  tgpc(5);
  printf("\nTo hop chap %d cua %d = %d ", k, n, tg[n][k]);
  return 0;
}