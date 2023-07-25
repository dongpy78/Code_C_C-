#include <iostream>
#include <cmath>
using namespace std;

int nt(int n) {
  for(int i = 2; i <= sqrt(n); i++) 
    if(n % i == 0) return 0;
  return n > 1;
}

void nhap_mang(int a[], int n) {
  for(int i = 0; i < n; i++) cin >> a[i];
}

void in_mang(int a[], int n) {
  for(int i = 0; i < n; i++) cout << a[i] << " ";
}

void tach_mang(int a[], int n) {
  int _chan = 0, _le = 0;
  int chan[n], le[n];
  for(int i = 0; i < n; i++) 
    a[i] % 2 == 0 ? chan[_chan++] = a[i] : le[_le++] = a[i];

  for(int i = 0; i < _chan; i++) cout << chan[i] << " ";
  cout << endl;
  for(int i = 0; i < _le; i++) cout << le[i] << " ";
}

void them_mang(int a[], int &n, int gia_tri, int vi_tri) {
  for(int i = n-1; i >= vi_tri; i--) a[i+1] = a[i];
  a[vi_tri] = gia_tri;
  n++;
}

void xoa_mang(int a[], int &n, int vi_tri) {
  for(int i = vi_tri+1; i < n; i++) a[i-1] = a[i];
  n--;
}

int main() {
  system("cls");
  int n; 
  cin >> n;
  int a[n];
  nhap_mang(a, n);
  in_mang(a, n);
  cout << endl;
  tach_mang(a, n);
  cout << endl;
  // Them mang
  int gia_tri, vi_tri;
  cout << "Nhap vao gia tri can them: ";
  cin >> gia_tri;
  cout << "Nhap vao vi tri can them: ";
  cin >> vi_tri;
  them_mang(a, n, gia_tri, vi_tri);
  in_mang(a, n);
  // Xoa mang
  int xoa; 
  cout << "Nhap vao vi tri can xoa: ";
  cin >> xoa;
  xoa_mang(a, n, xoa);
  in_mang(a, n);
}