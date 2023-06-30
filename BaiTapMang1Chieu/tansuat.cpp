/*
Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các giá trị xuất hiện trong mảng kèm theo tần xuất tương ứng,
mỗi giá trị chỉ liệt kê một lần theo thứ tự xuất hiện
INPUT 0
8
57 58 29 28 19 42 14 72
OUTPUT 0
57 1
58 1
29 1
28 1
19 1
42 1
14 1
72 1

INPUT 1
10 
1 2 1 2 1 2 4 5 5 5
OUTPUT 1
1 3
2 3
4 1
5 3
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
    int check = 1;
    for(int j = 0; j < i; j++) {
      if(a[i] == a[j]) {
        check = 0; break;
      } 
    }
    if(check) {
      int dem = 1;
      for(int j = i + 1; j < n; j++) 
        if(a[i] == a[j]) dem++;
      cout << a[i] << " " << dem << endl;
    }
  }
}