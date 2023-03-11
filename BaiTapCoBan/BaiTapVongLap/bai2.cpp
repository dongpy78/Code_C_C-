/*
  Nhập vào một số nguyên dương n, đếm xem n có bao nhiêu chữ số,
  tìm ra chữ số lớn nhất, chữ số nhỏ nhất
  Vd: n = 216935
  => có 6 chữ chữ số 
  => chữ số Min = 1, chữ số Max = 9;
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  system("cls");
  int n, dem = 0, max, min;
  do {
    cout << "\nNhap vao so nguyen duong n: ";
    cin >> n;
    if(n < 0) cout << "\nGia tri n khong hop le. Xin kiem tra lai!";
  }while(n < 0);

  // // Đếm chữ số
  // while(n != 0) {
  //   n /= 10; // Liên tục chia n cho 10
  //   dem++;
  // }
  int temp = n;
  dem = log10((double)temp) + 1;

  max = min = temp % 10;
  temp / 10;

  while(temp != 0) {
    int chuso = temp % 10; // Lấy chữ số cuối
    temp /= 10; // Loại bỏ chữ số cuối
    if(chuso > max) max = chuso;
    if(chuso < min) min = chuso;
  }
  
  cout << "\nGia tri " << n << " co " << dem << " chu so ";
  cout << "\nGia tri lon nhat la: " << max;
  cout << "\nGia tri nho nhat la: " << min;
  return 0;
}