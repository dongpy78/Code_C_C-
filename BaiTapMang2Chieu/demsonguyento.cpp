/*
Cho ma trận vuông cỡ N*N gồm N hàng, mỗi hàng N cột. Hãy đếm các số nguyên tố trên đường chéo chính và
đường chéo phụ, mỗi giá trị là số nguyên tố thõa mã chỉ đếm 1 lần
INPUT
3 
1 2 3
4 5 6
7 8 9
OUTPUT
3
*/

#include <iostream>
#include <cmath>
using namespace std;

int nt(int n) {
  for(int i = 2; i <= sqrt(n); i++) 
    if(n % i == 0) return 0;
  return n > 1;
}

void sx(int a[], int n) {
  for(int i = 0; i < n-1; i++) {
    int pos = i;
    for(int j = i + 1; j < n; j++) {
      if(a[pos] > a[j]) pos = j;
    }
    int tam = a[pos]; a[pos] = a[i]; a[i] = tam;
  }
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

  int dem = 0, b[400];
  for(int i = 0; i < n; i++) {
    if(nt(a[i][i])) {
      b[dem] = a[i][i];
      dem++;
    } 
    if(nt(a[i][n-i-1])) {
      b[dem] = a[i][n-i-1];
      dem++;
    } 
  }
  sx(b, dem);
  int cnt = 0;
  if(dem != 0) cnt = 1;
  for(int i = 1; i < dem; i++) {
    if(b[i] != b[i-1]) cnt++;
  }
  cout << cnt;
}