// Nhập vào 4 số nguyên a, b, c, d. Tìm min, max
#include <iostream>
using namespace std;
 
int main() {
  int a, b, c, d, min, max;
  cout << "\nNhap a: ";
  cin >> a;
  cout << "\nNhap b: ";
  cin >> b;
  cout << "\nNhap c: ";
  cin >> c;
  cout << "\nNhap d: ";
  cin >> d; 
  
  // Gán cho nó mặc định là số đầu tiên
  min = max = a;

  // Tìm Min
  if(b < min) 
    min = b; // cập nhật min là b
  if(c < min) 
    min = c; // cập nhật min là c
  if(d < min) 
    min = d; // cập nhật min là d
  
  // Tìm Max
  if(b > max) 
    max = b;
  if(c > max) 
    max = c;
  if(d > max) 
    max = d;
  cout << "\nGia tri min la: " << min;
  cout << "\nGia tri max la: " << max;
  return 0;
}