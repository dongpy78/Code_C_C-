/*
Cho mảng số nguyên A[] gồm N phần tử, hãy đếm số lượng các phần tử thỏa mãn các yêu cầu sau
1. Số lượng số nguyên tố trong dãy
2. Số lượng số thuận nghịch trong dãy
3. Số lượng số chính phương trong dãy
4. Số lượng số có tổng chữ số của nó là số nguyên tố.
INPUT
6
4 1682 5972 6331 9872 3956
OUTPUT
0
1
1
4
*/

#include <iostream>
#include <cmath>
using namespace std;

int nt(int n) {
  for(int i = 2; i <= sqrt(n); i++)
    if(n % i == 0) return 0;
  return n > 1;
}

int tn(int n) {
  int lat = 0, tam = n;
  while(n) {
    lat = lat * 10 + n % 10;
    n /= 10;
  }
  return lat == tam;
}

int cp(int n) {
  int can = sqrt(n);
  return can * can == n;
}

int tongnt(int n) {
  int sum = 0;
  while(n) {
    sum += n % 10;
    n /= 10;
  }
  if(nt(sum)) return 1;
  else return 0;
}

int main() {
  system("cls");
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];

  int c1 = 0, c2 = 0, c3 = 0, c4 = 0;

  for(int i = 0; i < n; i++) {
    if(nt(a[i])) c1++;
    if(tn(a[i])) c2++;
    if(cp(a[i])) c3++;
    if(tongnt(a[i])) c4++;
  }

  cout << c1 << " " << c2 << " " << c3 << " " << c4;
}