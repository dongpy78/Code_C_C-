/*
Tính n giai thừa bằng đệ quy
INPUT
5
OUTPUT
120
*/

#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

ll gt(int n) {
  if(n == 1) return 1;
  return n * gt(n-1);
}

int main() {
  system("cls");
  int n;
  cin >> n;
  cout << gt(n);
  return 0;
}