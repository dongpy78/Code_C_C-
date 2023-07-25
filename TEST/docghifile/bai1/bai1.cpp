#include <iostream>
#include <cmath>
using namespace std;
#include <fstream>
const int MAX = 100;

int nt(int n) {
  for(int i = 2; i <= sqrt(n); i++) 
    if(n % i == 0) return 0;
  return n > 1;
}

void doc_mang(const char fname[], int a[], int &n) {
  ifstream file(fname);
  if(!file.is_open()) cout << "Khong mo duoc file";
  else {
    file >> n;
    for(int i = 0; i < n; i++) file >> a[i];
    file.close();
  }
}

void in_mang(int a[], int n) {
  for(int i = 0; i < n; i++) cout << a[i] << " ";
}

void in_so_nt(int a[], int n) {
  for(int i = 2; i <= n; i++) {
    if(nt(a[i])) cout << a[i];
  }
}

int main() {
  system("cls");
  int a[MAX], n;
  doc_mang("input.txt", a, n);
  cout << "Mang vua nhap la: ";
  in_mang(a, n);
  cout << endl;
  cout << "Cac so nguyen to: ";
  in_so_nt(a, n);
  return 0;
}