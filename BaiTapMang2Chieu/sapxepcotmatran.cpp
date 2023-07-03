/*
Cho ma trận vuông cỡ N*N gồm N hàng, mỗi hàng N cột. Hãy sắp xếp các phần tử trong ma trận theo cột theo
thứ tự tăng dần
INPUT
3
1 2 3
5 5 2
1 4 7
OUTPUT
1 2 3
1 4 3
5 5 7
*/

#include <iostream>
#include <cmath>
using namespace std;

void Sort(int a[], int n) {
  for(int i = 0; i < n-1; i++) 
    for(int j = i + 1; j < n; j++)
      if(a[i] > a[j]) swap(a[i], a[j]);
}      

int main() {
  system("cls");
  int n;
  cin >> n;
  int a[n][n], b[n][n];
  // Nhap ma tran
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> a[i][j];
      b[j][i] = a[i][j];
    }
  }

  for(int i = 0; i < n; i++) Sort(b[i], n);

   for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cout << b[j][i] << " ";
    }
    cout << endl;
  }   

}