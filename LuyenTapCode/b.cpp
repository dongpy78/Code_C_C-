#include <iostream>
using namespace std;
#include <cmath>

int main() {
  int n;
  cout << "\nNhap n: ";
  cin >> n;
  int tam = n;
  int dem = log10(tam);
  int sodaonguoc = 0;
  while(tam != 0) {
    int chuso = tam % 10;
    tam /= 10;
    sodaonguoc += chuso * pow(10, dem--);
  }
  cout << "\nSo dao nguoc la: " << sodaonguoc;
  return 0;
}