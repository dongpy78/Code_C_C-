/*
Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là liệt kê các phần tử trong mảng thỏa mãn nó lớn hơn
cả phần tử đứng trước và đứng sau nó. 2 phần tử đầu tiên và cuối cùng của mảng không được coi là thỏa mãn.
INPUT
7
341 607 986 616 131 857 234
OUTPUT
986 857
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  system("cls");
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];

  for(int i = 1; i < n-1; i++) {
    if(a[i] > a[i-1] && a[i] > a[i+1]) cout << a[i] << " ";
  }
}