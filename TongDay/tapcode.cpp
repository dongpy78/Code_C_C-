#include <iostream>
using namespace std;
int a[] = {1, 8, 5, 4, 6, 7, 9, 12, 15};
int n = sizeof(a) / sizeof(a[0]);
int S = 20;
int b[20];

void kt() {
  int tong = 0;
  for(int i = 0; i < n; i++)
    if(b[i] == 1) tong += a[i];
  if(tong == S) {
    cout << endl;
    for(int i = 0; i < n; i++)
      if(b[i] == 1)
        cout << "   " << a[i];
  }
}

void thu(int i) {
  for(int j = 0; j <=1 ; j++) {
    b[i] = j;
    if(i < n-1) thu(i + 1);
    else kt();
    b[i] = 0;
  }
}

int main() {
  thu(0);
  return 0;
}