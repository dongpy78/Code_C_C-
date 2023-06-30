/*
Tính tổng hàm S(n) = 1^2 + 2^2 + 3^2 + 4^2 + ... + n^2
INPUT
53
OUTPUT
51039
*/

#include <iostream>
#include <cmath>
using namespace std;

int S(int n) {
  if(n == 1) return 1;
  return n*n + S(n-1);
}

int main() {
  system("cls");
  int n;
  cin >> n;
  cout << S(n);
  return 0;
}