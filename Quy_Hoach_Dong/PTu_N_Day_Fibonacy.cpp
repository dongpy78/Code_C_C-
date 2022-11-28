// Dùng Đệ Quy
#include <stdio.h>
int n;
int fibo(int n) {
  if(n < 2) return 1;
  else 
    return fibo(n-1) + fibo(n-2);
}

int main() {
  n =5;
  printf("\nfibo(%d) = %d", n, fibo(n));
  return 0;
}