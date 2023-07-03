/*
Cho ma trận cỡ N*M gồm N hàng, mỗi hàng M cột. Hãy tính tổng các phần tử trên từng hàng và tổng các phần tử
trên từng cột của ma trận
INPUT
3 3
1 2 3
4 5 6
7 8 9
OUTPUT
6 15 24
12 15 18
*/

#include <iostream>
#include <cmath>
using namespace std;

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
  // Tinh tong hang
  for(int i = 0; i < n; i++) {
    int sum = 0;
    for(int j = 0; j < m; j++) {
      sum += a[i][j];
    }
    cout << sum << " ";
  }
  cout << endl;
  // Tinh tong cot
  for(int i = 0; i < m; i++) {
    int sum = 0;
    for(int j = 0; j < n; j++) {
      sum += a[j][i];
    }
    cout << sum << " ";
  }

}