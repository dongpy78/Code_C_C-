/*
Liệt kê số nguyên tố trong mảng
INPUT
5
2 10 2 9 3
OUTPUT
2 2 3
*/

#include <iostream>
#include <cmath>
using namespace std;
bool
 nt(int n) {
  for(int i = 2; i <= sqrt(n); i++) 
    if(n % i == 0) return 0;
  return n > 1;
}

int main() {
  system("cls");
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];

  for(int i = 0; i < n; i++) {
    if(nt(a[i])) cout << a[i] << " ";
  }
  return 0;
}