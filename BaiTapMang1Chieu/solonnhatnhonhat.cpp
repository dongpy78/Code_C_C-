/*
Cho mảng số nguyên A[] gồm N phần tử, hãy tìm vị trí (bắt đầu từ 0) cuối cùng của giá trị nhỏ nhất trong mảng
và vị trí đầu tiên của giá trị lớn nhất trong mảng. Tức là nếu có nhiều số cùng giá trị nhỏ nhất thì phải in ra
vị trí cuối cùng, và có nhiều số cùng giá trị lớn nhất trong mảng phải in ra vị trí đầu tiên lớn nhất đó.
INPUT
9
936 234 471 168 834 82 280 674 881
OUTPUT
5 0
*/

// CACH 1

// #include <iostream>
// using namespace std;

// int main() {
//   system("cls");
//   int n;
//   cin >> n;
//   int a[n];  
//   // Nhap mang
//   for(int i = 0; i < n; i++) cin >> a[i];

//   int min = 1e9, max = -1e9;

//   for(int i = 0; i < n; i++) {
//     if(a[i] < min) min = a[i];
//     if(a[i] > max) max = a[i];
//   }

//   // duyet xuat hien thang nho nhat xuat hien o cuoi
//   for(int i = n - 1; i >= 0; i--) 
//     if(a[i] == min) {
//       cout << i << " "; break;
//     }
  
  
//   // duyet thang lon nhat xuat hien dau tien trong mang
//   for(int i = 0; i < n; i++) 
//     if(a[i] == max) {
//       cout << i; break;
//     } 
// }

// CACH 2

#include <iostream>
using namespace std;

int main() {
  system("cls");
  int n;
  cin >> n;
  int a[n];  
  // Nhap mang
  for(int i = 0; i < n; i++) cin >> a[i];

  int min = 1e9, max = -1e9, min_pos, max_pos;

  for(int i = 0; i < n; i++) {
    if(a[i] <= min) {
      min = a[i];
      min_pos = i;
    }
    if(a[i] > max) {
      max = a[i];
      max_pos = i;
    } 
  }
  cout << min_pos << " " << max_pos;
 
}

