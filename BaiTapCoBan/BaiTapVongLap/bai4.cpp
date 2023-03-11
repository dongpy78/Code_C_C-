/*
  Tìm ước chung lớn nhất của 2 số nguyên dương a và b nhập từ bàn phím
*/
#include <iostream>
using namespace std;

int main() {
  int a, b;
  cout << "\nNhap a = ";
  cin >> a;
  cout << "\nNhap b = ";
  cin >> b;
  // Tìm ước chung lớn nhất
  int Min = a < b ? a : b;
  int Max = a > b ? a : b;
  for(int i = Min; i >= 1; i--) 
    if(Min % i == 0 && Max % i == 0) {
      cout << "\nUoc chung lon nhat " << i;
      break;
    }
  // Tìm Bội Chung Nhỏ Nhất
  int k = 1;
  int BCNN;
  while(true) {
    BCNN = Max * k;
    if(BCNN % Min == 0) {
      cout << "\nBCNN = " << BCNN;
      break;
    }
    k++;
  }
  return 0;
}