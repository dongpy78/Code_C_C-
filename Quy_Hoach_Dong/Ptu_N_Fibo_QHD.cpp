// Dung Quy Hoach Dong
#include <stdio.h>
int n;
int fibo[20];

void tinh(int n) {
  fibo[1] = 1;
  fibo[2] = 1;
  for(int i = 3; i <= n; i++)
    fibo[i] = fibo[i - 1] + fibo[i - 2];

}

int main() {
  n = 8;
  tinh(8);
  printf("\nfibo(%d) = %d", n, fibo[n]);
}