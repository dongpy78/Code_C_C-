/*
Dãy số fibonacci là dãy số thõa mãn: F1 = 0, F2 = 1, Fn = Fn-1+Fn-2. Hãy tìm số fibonacci thứ n sử dụng đệ quy
INPUT
1
OUTPUT
0
*/

#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int fibo (int n) {
  if(n == 1) return 0;
  if(n == 2) return 1;
  return fibo(n-1) + fibo(n-2);
}

int main() {
  system("cls");
  int n;
  cin >> n;
  cout << fibo(n);
  return 0;
}