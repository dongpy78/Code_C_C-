/*
Cho mảng số nguyên A[] gồm N phần tử và số nguyên X, tìm kiếm X có xuất hiện trong mảng hay không, 
nếu X xuất hiện trong mảng thì thực hiện xóa vị trí xuất hiện đầu tiên của X trong 
mảng, ngược lại in ra "NOT FOUND" nếu X không xuất hiện
INPUT 0
9 212
359 523 428 952 752 195 613 6 122
OUTPUT 0

INPUT 1
5 3
1 3 3 2 5
OUTPUT 1
1 3 2 5
NOT FOUND
*/


#include <iostream>
#include <cmath>
using namespace std;

int main() {
  system("cls");
  int n, x;
  cin >> n >> x;
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  
  int k = -1; // tim chi so dau tien cua mang
  for(int i = 0; i < n; i++) {
    if(a[i] == x) {
      k = i;
      break;
    }
  }

  if(k == -1) {
    cout << "NOT FOUND";
  } else {
    // xoa phan tu o chi so k
    for(int i = k; i < n-1; i++) {
      a[i] = a[i+1];
    }
    n--;
    for(int i = 0; i < n; i++) {
      cout << a[i] << " ";
    }
  }

  return 0;
}