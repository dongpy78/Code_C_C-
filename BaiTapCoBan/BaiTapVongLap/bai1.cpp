/*
  1! + 2! + 3! + ... + n!
*/
#include <iostream>
using namespace std;

int main() {
  int S = 0; int n;
  cout << "\nNhap n:";
  cin >> n;
  for(int i = 1; i <= n; i++) {
    int tich = 1;
    for(int j = 1; j <= i; j++)
      tich *= j;
    S += tich;
  }
  cout << S;
  return 0;
}