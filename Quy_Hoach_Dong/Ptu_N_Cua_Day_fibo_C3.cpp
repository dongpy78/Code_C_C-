#include <stdio.h>
int a, b, c;
void tinh(int n) {
  a = 1; b = 1;
  if(n <= 2) c = 1;
  else {
    for(int i = 1; i <= n-2; i++) {
      c = a + b; a = b; b = c;
    }
  }
}
int main() {
  int n = 9;
  tinh(9);
  printf("fibo(%d) = %d", n, c);
}