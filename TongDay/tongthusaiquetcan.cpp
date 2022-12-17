// Thu sai quet can
#include <stdio.h>
int a[] = {8, 4, 6, 1, 9, 4, 3, 7};
int S = 20;
int n = sizeof(a) / sizeof(a[0]);
// trang thai
int b[20];

void kt_in() {
  int tong = 0;
  for(int i = 0; i < n; i++) {
    if(b[i] == 1)
      tong = tong + a[i];
  }
  if(tong == S) {
    printf("\n");
      for(int i = 0; i < n; i++)
        if(b[i] == 1)
          printf("%3d", a[i]);
    
  }
}

void thu(int i) {
  for(int j = 0; j <= 1; j++) {
    b[i] = j;
   if(i < n-1) thu(i + 1);
   else 
    kt_in();
   b[i] = 0;
  }
}

int main() {
  thu(0);
  return 0;
}