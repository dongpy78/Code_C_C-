/*
Tính trung bình cộng các số là nguyên tố
INPUT
5
-911 234 151 347 231
OUTPUT
249.000
*/


#include <iostream>
#include <cmath>
using namespace std;

int nt(int n) {
  for(int i = 2; i <= sqrt(n); i++) 
    if(n % i == 0) return 0;
  return n > 1;
}

int main() {
  system("cls");
  int n; 
  cin >> n;
  int a[n];
  // Nhap mang
  for(int i = 0; i < n; i++) cin >> a[i];

  int dem = 0, sum = 0;
  for(int i = 0; i < n; i++) {
    if(nt(a[i])) {
      dem++;
      sum += a[i];
    }
  }
  cout << (double) sum / dem;
  return 0;
}