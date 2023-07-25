#include <iostream>
#include <cmath>
using namespace std;

int nt(int n) {
  for(int i = 2; i <= sqrt(n); i++) 
    if(n % i == 0) return 0;
  return 1;
}

void in_so_nt(int n) {
  for(int i = 2; i <= n; i++)
    if(nt(i)) cout << i << " ";
}

void in_n_so_nt_dau(int n) {
  int dem = 0, i = 2;
  while (dem < n)
  {
    if(nt(i)) {
      cout << i << " ";
      dem++;
    }
    i++;
  }  
}

int tim_so_nt(int n) {
  int next_nt = n+1;
  while(!nt(next_nt)) next_nt++;
  return next_nt;
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

  for(int i = 0; i < n; i++) cin >> a[i];


  in_so_nt(n);
  cout << endl;
  in_n_so_nt_dau(n);
  cout << endl;
  cout << "So nt lon hon n la: " << tim_so_nt(n);
  cout << endl;
  
  // THem mang
  int vitri, giatri;
  cout << "Nhap vao gia tri can them: ";
  cin >> giatri;
  cout << "Nhap vao vi tri can them: ";
  cin >> vitri;
  them_mang(a, n, giatri, vitri);

  for(int i = 0; i < n; i++) 
    cout << a[i] << " ";

  int xoa;
  cout << "Nhap vao gia tri can xoa: ";
  cin >> xoa;
  xoa_mang(a, n, xoa);
  for(int i = 0; i < n; i++) cout << a[i] << " ";

  return 0;
}