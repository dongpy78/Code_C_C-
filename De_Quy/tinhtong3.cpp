/*
Tính tổng hàm S(n) = 1^3 + 2^3 + 3^3 + 4^3 + ... + n^3
INPUT
435
OUTPUT
8992728900
*/

#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

ll S(int n) {
  if(n == 1) return 1;
  return n*n*n + S(n-1);
}

int main() {
  system("cls");
  int n;
  cin >> n;
  cout << S(n);
  return 0;
}