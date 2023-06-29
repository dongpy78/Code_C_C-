/* Bài 2: Tính S(n) = 1^2 + 2^2 + … + n^2 */
#include <iostream>
using namespace std;

int main() {
  system("cls");
  int n, tong = 0;
  cin >> n;  
  for(int i = 1; i <= n; i++) {
    tong += i*i;
  }
  cout << tong;
  return 0;
}