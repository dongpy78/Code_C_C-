/*
Tính tổng hàm S(n) = 1 + 2 + 3 + 4 ... + n
INPUT
733
OUTPUT
299151
*/

#include <iostream>
using namespace std;

int S(int n) {
  if(n == 0) return 0;
  return n + S(n-1);
}

int main() {
  system("cls");
  int n;
  cin >> n;
  cout << S(n);
  return 0;
}