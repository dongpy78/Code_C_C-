// Su Dung De Quy
#include <stdio.h>
int nums[] = {1, 5, 1, 7};
int n = sizeof(nums) / sizeof(nums[0]);

int max(int a, int b) {
  if(a > b) return a;
  else return b;
}

int vmax(int n) {
  if(n < 0) return 0;
  if(n == 0) return nums[0];
  if(n == 1) return max(nums[0], nums[1]);
  if(n > 1) return max(vmax(n-1), vmax(n-2) + nums[n]);
}

int main() {
  printf("\nSo tien lon nhat lay duoc: %d", vmax(n - 1));
  return 0;
}