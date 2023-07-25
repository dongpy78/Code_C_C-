/*
Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là chèn phần tử X vào vị trí K trong mảng sau đó in
ra mảng
INPUT
Dòng đầu tiên là 3 số nguyên dương N, X, K; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng
8 292 5
343 473 572 525 210 2 874 318
OUTPUT
343 473 572 525 292 210 2 874 318
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  system("cls");
  int n, k, x;
  cin >> n >> x >> k;
  int a[n+1];
  for(int i = 0; i < n; i++) cin >> a[i];
  --k;
  for(int i = n; i > k; i--) {
    a[i] = a[i-1];
  }
  a[k] = x; ++n;

  for(int i = 0; i < n; i++) 
    cout << a[i] << " ";
  return 0;
}