/*
Cho mảng số nguyên A[] gồm N phần tử, in ra các phần tử là số chẵn ở chỉ số chẵn,
nếu mảng không tồn tại phần tử như vậy thi in ra "NONE"
INPUT
5
-971 107 458 222 200
OUTPUT
458 200
*/


#include <iostream>
using namespace std;

int main() {
  system("cls");
  // Nhap n
  int n; 
  cin >> n;
  int a[n];
  // Nhap mang
  for(int i = 0; i < n; i++) cin >> a[i];

  int check = 0;

  for(int i = 0; i < n; i++) {
    if(i % 2 == 0 && a[i] % 2 == 0) {
      cout << a[i] << " ";
      check = 1; // da tim thay
    } 
  }

  if(check == 0) cout << "NONE";
}