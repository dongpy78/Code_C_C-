/* Bài 3: Tính S(n) = 1 + 1/2 + 1/3 + … + 1/n */
#include <iostream>
using namespace std;
int main() {
  system("cls");
  float n, tong = 0;
  cin >> n;
  while (n < 1) {
    cout << "Nhap lai: " << endl;
    cin >> n;
  }
  
  for(int i = 1; i <= n; i++) {
    tong += 1.0 / i;
  }
  cout << tong;
  return 0;
}