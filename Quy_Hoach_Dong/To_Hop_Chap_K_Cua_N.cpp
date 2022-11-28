// Lập Trình Đệ Quy
#include <stdio.h>
int tohop(int n, int k) {
  if(k == 0 || k == n) 
    return 1;
  else 
    return tohop(n-1, k-1) + tohop(n-1, k);
}
int main() {
  int n = 5, k = 3;
  printf("\nTo hop chap: %d cua %d = %d", k, n, tohop(n, k));
  return 0;
}