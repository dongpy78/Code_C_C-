/*
Cho mảng số nguyên A[] gồm N phần tử, tìm số lớn nhất và số lớn thứ 2 trong mảng. 
Và 2 số này có thể giống nhau
INPUT
4
996817 993012 990914 998837
OUTPUT
998837 996817
*/

#include <iostream>
#define ll long long
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
    } else if(a[i] > max2) {
      max2 = a[i];
    }
  }
  cout << max1 << " " << max2;
}