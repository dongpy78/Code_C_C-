/*
Cho ma trận cỡ N*M gồm N hàng, mỗi hàng M cột. Hãy tìm số nhỏ nhất trong ma trận và số lớn nhất trong ma trận,
sau đó liệt kê các vị trí xuất hiện của các phần tử này trong ma trận.
INPUT
3 3
1 2 1
4 5 6
7 8 9
OUTPUT
1 
1 1
1 3
9
3 3
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

  int max = -1e9, min = 1e9;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      max = fmax(max, a[i][j]);
      min = fmin(min, a[i][j]);
    }
  }
  cout << min << endl;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(a[i][j] == min) cout << i + 1 << " " << j + 1 << endl;
    }
  }
  cout << max << endl;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(a[i][j] == max) cout << i + 1 << " " << j + 1 << endl;
    }
  }
}