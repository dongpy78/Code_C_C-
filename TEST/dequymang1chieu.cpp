#include <iostream>
using namespace std;

void nhap(int &n) {
  cout << "Nhap so phan tu: ";
  cin >> n;
}

void nhap_mang(int a[], int n) {
  if(n == 0) return;
  nhap_mang(a, n - 1);
  cout << "Nhap a["<< n <<"] = ";
  cin >> a[n-1];
}

int main() {

  return 0;
}