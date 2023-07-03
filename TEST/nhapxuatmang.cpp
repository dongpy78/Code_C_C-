#include <iostream>
using namespace std;

void nhap_mang(int a[], int &n) {
  cout << "Nhap so luong phan tu mang: ";
  cin >> n;
  
  for(int i = 0; i < n; i++) {
    cout << "Nhap vao a["<< i <<"] = ";
    cin >> a[i];
  }
}

void xuat_mang(int a[], int n) {
  for(int i = 0; i < n; i++) 
    cout << a[i] << " ";
}

void sort(int a[], int n) {
  for(int i = 0; i < n-1; i++) 
    for(int j = i + 1; j < n; j++) 
      if(a[i] < a[j]) swap(a[i], a[j]);
}

int main() {
  system("cls");
  int n;
  int a[100];
  nhap_mang(a, n);
  xuat_mang(a, n);
  cout << endl;

  cout << "Mang sau khi da sap xep la: ";
  sort(a, n);
  xuat_mang(a, n);
  return 0;
}