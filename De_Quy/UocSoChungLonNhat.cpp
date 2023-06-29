// Tìm ước số chung lớn nhất của 2 số
#include <iostream>
using namespace std;

int UCLN(int a, int b) {
  if(a == 0) return b;
  return UCLN(b % a, a);
}

int BSCNN(int a, int b) {
  if(a == 0) return b;
  return (a*b)/UCLN(a, b);
}

int main() {
  system("cls");
  int a, b;
  cin >> a >> b;
  cout << UCLN(a, b);
  cout << BSCNN(a, b);
}
