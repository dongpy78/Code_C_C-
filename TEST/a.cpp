#include <iostream>
using namespace std;

void Sort(int a[], int n) {
  for(int i = 0; i < n - 1; i++)
    for(int j = i + 1; j < n; j++)
      if(a[i] > a[j]) swap(a[i], a[j]);
}



int main() {
  system("cls");
  int n;
  cout << "Nhap so luong phan tu mang: ";
  cin >> n;
  int a[n]; 

  // nhap mang
  for(int &x : a) {
    cin >> x;
  }

  // xuat mang
  for(int x : a) {
    cout << x << " " ;
  }

  Sort(a, n);
  for(int x:a) {
    cout << x << " ";
  }



  return 0;
}