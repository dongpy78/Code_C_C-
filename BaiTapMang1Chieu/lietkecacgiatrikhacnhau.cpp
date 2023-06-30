/*
Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các giá trị khác nhau trong mảng theo thứ tự xuất hiện,
mỗi giá trị chỉ liệt kê 1 lần. 
INPUT
9
1 2 3 4 1 2 3 4 5 
OUTPUT
1 2 3 4 5

*/


#include <iostream>
using namespace std;

int main() {
  system("cls");
  int n;
  cin >> n;
  int a[n];  
  // Nhap mang
  for(int i = 0; i < n; i++) cin >> a[i];
  
  for(int i = 0; i < n; i++) {
    int check = 1; // Kiem tra xem a[i] da duoc in truoc do hay chua
    for(int j = 0; j < i; j++) {
      if(a[i] == a[j]) {
        check = 0; break;
      } 
    }
    if(check) cout << a[i] << " ";
  }
}