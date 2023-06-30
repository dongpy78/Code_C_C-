/*
  In ra số lớn nhất và nhỏ nhất trong mảng
  INPUT
  5
  -2 10 2 9 3
  OUTPUT
  10 -2
*/
#include <iostream>
using namespace std;

int main() {
  system("cls");
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++)  cin >> a[i];

  int min = a[0], max = a[0];
  for(int i = 0; i < n; i++) {
    if(a[i] < min) min = a[i];
    if(a[i] > max) max = a[i];
  }

  cout << "max = " << max << " - " << "min = " << min;

  return 0;
}