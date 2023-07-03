/*
Cho ma trận cớ N*M gồm N hàng, mỗi hàng M cột. Hãy liệt kê các số nguyên tố theo từng hàng trong ma trận.
INPUT
3 3
1 2 3
4 5 6 
7 8 9
OUTPUT
2 3 
5
7
*/

#include <iostream>
#include <cmath>
using namespace std;

int nt(int n) {
  for(int i = 2; i <= sqrt(n); i++) 
    if(n % 2 == 0) return 0;
  return n > 1;
}

int main() {
  system("cls");
  int n, m;
  cin >> n >> m;
  int a[n][m];
  // Nhap ma tran
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++)
      cin >> a[i][j];
  }
  // Liet ke cac so nguyen to theo tung hang
  cout << "Cac so nguyen to trong ma tran: " << endl;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) 
      if(nt(a[i][j])) cout << a[i][j] << " ";
    cout << endl;
  }

  return 0;
}