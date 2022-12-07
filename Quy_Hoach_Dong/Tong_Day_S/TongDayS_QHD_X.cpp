// IN RA KET QUA THEO CHIEU XUOI
#include <stdio.h>
int a[] = {0, 5, 7, 2, 9, 1, 6, 3};
int S = 15;
int n = sizeof(a) / sizeof(a[0]);
int P[20][20];
int luukq[20];

int main() {
  // Bai toan co so
  for(int i = 1; i <= 20; i++) 
    P[i][0] = 0;
  P[1][a[1]] = 1;
  // Cong thuc truy hoi
  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= S; j++)
      if((P[i-1][j] == 1) || P[i-1][j-a[i]] == 1)
        P[i][j] = 1;
  // Kiem tra day con co tong bang S
  if(P[n][S] == 1) {
    printf("\nCo day co tong = %d \n", S);
  // Truy vet cac phan tu thuoc day con
  int k = 1;
  for(int i = n; i > 0; i--)
    if((P[i][S] == 1) && (P[i-1][S] == 0)) {
      // printf("%3d", a[i]);
      luukq[k] = a[i]; k = k + 1;
      S = S - a[i];
    }
    for(int i = k - 1; i > 0; i--)
      printf("%3d", luukq[i]);
  }
  return 0;
}