/*
Cho mảng số nguyên A[] gồm N phần tử và số nguyên X, hãy đếm xem trong mảng có bao
nhiêu số lớn hơn X và bao nhiêu số nhỏ hơn X.
INPUT
5 
-798 183 434 850 555
135
OUTPUT 
1
4
*/

#include <iostream>
using namespace std;

int main() {
  system("cls");
  // Nhap n
  int n; 
  cin >> n;
  int a[n];
  // Nhap mang
  for(int i = 0; i < n; i++) cin >> a[i];
  //Nhap x
  int x;
  cin >> x;

  int lon = 0, nho = 0;
  for(int i = 0; i < n; i++) {
    if(a[i] > x) lon++;
    else if(a[i] < x) nho++;
  }

  cout << nho << endl << lon;

  
  return 0;
}