/*
Cho mảng số nguyên A[] gồm N phần tử, hãy tìm độ chênh lệch nhỏ nhất giữa 2 phần tử trong mảng
INPUT
8
69 96 93 27 84 32 78 56
OUTPUT 
3
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  system("cls");
  int n;
  cin >> n;
  int a[n];  
  // Nhap mang
  for(int i = 0; i < n; i++) cin >> a[i];

  int max1 = -1e9, max2 = -1e9;
  for(int i = 0; i < n; i++) {
    if(a[i] > max1) {
      max2 = max1;
      max1 = a[i];
    } else if(a[i] > max2) max2 = a[i];
  }
  cout << max1 << " " << max2;
}