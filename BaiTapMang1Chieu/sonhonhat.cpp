/*
Cho mảng số nguyên A[] gồm N phần tử, hãy đếm xem trong mảng của bạn có bao nhiêu số có 
cùng giá trị nhỏ nhất. Ví dụ mảng A = {1, 2, 1, 3, 5} thì số nhỏ nhất trong mảng là 1 
xuất hiện 2 lần
INPUT
5
-854 600 222 472 207
OUTPUT
1
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

  int min = 1e9;
  for(int i = 0; i < n; i++) {
    if(min > a[i]) min = a[i];
  }

  int dem = 0;
  for(int i = 0; i < n; i++) {
    if(a[i] == min) dem++;
  }
  cout << dem;
}