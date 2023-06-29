/*Bài 1: Tính S(n) = 1 + 2 + 3 + … + n*/
#include <iostream>
using namespace std;
int main() {
  system("cls");
  int n, tong = 0;
  cin >> n;
  for(int i = 0; i <= n; i++) {
    tong += i;
  }
  cout << tong;
  return 0;
}