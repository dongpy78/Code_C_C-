#include <iostream>
#include <cmath>
using namespace std;

int nt(int n) {
  for(int i = 2; i <= sqrt(n); i++) 
    if(n % i == 0) return 0;
  return n > 1;
}

int cp(int n) {
  int can = sqrt(n);
  return can*can == n;
}

void nhap(int a[], int n) {
  for(int i = 0; i < n; i++) cin >> a[i];
}

void in_mang(int a[], int n) {
  for(int i = 0; i < n; i++) cout << a[i] << " ";
}

void tach_mang(int a[], int n) {
  int _snt = 0, _knt = 0;
  int snt[n], knt[n];
  for(int i = 0; i < n; i++) 
    nt(a[i]) ? snt[_snt++] = a[i] : knt[_knt++] = a[i];
  
  for(int i = 0; i < _snt; i++) cout << snt[i] << " ";
  cout << endl;
  for(int i = 0; i < _knt; i++) cout << knt[i] << " ";  
}


int main() {
  system("cls");
  int n, _chan = 0, _le = 0;
  cin >> n;
  int a[n];
  
  nhap(a, n);
  in_mang(a, n);
  cout << endl;
  tach_mang(a, n);
}