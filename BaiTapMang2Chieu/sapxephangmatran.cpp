/*
cho ma trận vuông cỡ N*N gồm N hàng, mỗi hàng N cột. Hãy sắp xếp các phần tử của từng hàng của ma trận
theo thứ tự tăng dần
INPUT
3 
2 7 6
1 2 3 
9 8 1
OUTPUT
2 6 7
1 2 3
1 8 9
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
  int a[n][n];
  // Nhap ma tran
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++)
      cin >> a[i][j];
  }

  cout << "Sap xep ma tran: " << endl;
  for(int i = 0; i < n; i++) {
    Sort(a[i], n);
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }    
  return 0;
}