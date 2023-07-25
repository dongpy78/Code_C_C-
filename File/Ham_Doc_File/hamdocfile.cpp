#include <iostream>
#include <cmath>
using namespace std;
#include <fstream>

void Doc_File(ifstream& filein, int a[], int& n) {
  for(int i = 0; i < n; i++) filein >> a[i];
}

// Ham xuat mang
void Xuat_Mang(int a[], int n) {
  for(int i = 0; i < n; i++) cout << a[i] << " ";
}

int tim_Max(int a[], int n) {
  int max = a[0];
  for(int i = 1; i < n; i++)
    if(max < a[i]) max = a[i];
  return max;
}

void sort(int a[], int n) {
  for(int i = 0; i < n-1; i++) 
    for(int j = 0; j < n; j++)
      if(a[i] > a[j]) swap(a[i], a[j]);
}

int main() {
  ifstream filein; // doi tuong doc file
  filein.open("input.txt", ios_base::in);
  int a[100];
  int n = 0;

  filein >> n; // đọc giá trị dòng đầu tiền từ file vào
  Doc_File(filein, a, n);
  cout << "DAY SO NGUYEN: ";
  Xuat_Mang(a, n);

  ofstream fileout; // doi tuong ghi file
  fileout.open("ketqua.txt", ios_base::out);

  fileout << tim_Max(a, n);

  sort(a, n);

  filein.close();
  fileout.close();
  return 0;
}