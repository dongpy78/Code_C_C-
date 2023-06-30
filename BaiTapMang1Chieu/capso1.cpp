/*
Cho mảng số nguyên A[] gồm N phần tử, hãy đếm xem trong mảng A[] tồn tại bao nhiêu cặp số
A[i], A[j] với i khác j sao cho tổng của 2 phần tử này bằng số K cho trước
INPUT 
5
1 2 3 1 2
3
OUTPUT 
4
*/

#include <iostream>
using namespace std;

int main() {
  system("cls");
  int n;
  cin >> n;
  int a[n];  
  // Nhap mang
  for(int i = 0; i < n; i++) cin >> a[i];
  // Nhap k
  int k;
  cin >> k;

  int dem = 0;
  for(int i = 0; i < n-1; i++) {
    for(int j = i + 1; j < n; j++) {
      // xet thang a[i] => xet a[i] cap voi cac phan tu a[j], j bat dau tu i + 1 => n-1
      if(a[i] + a[j] == k) dem++;
    }
  }
  cout << dem;
}