// Nhập vào 4 số nguyên a, b, c, d. Tìm min, max. Sử dụng random
// a từ 1 -> 10
// b từ 11 -> 100
// c từ -10 -> 80
// d từ 0 -> 1000000
/* Công thức random: 
  Muốn random 1 số x nằm trong đoạn [a, b] thì công thức là:
  x = a + rand() % (b - a + 1);
  Và chỉ random được ra số nguyên thôi!
 */
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

 
int main() {

  int a, b, c, d, min, max;

  srand(time(0)); // reset lại thời gian

  // a từ 1 -> 10
  a = 1 + rand() % 10;
  // b từ 11 -> 100
  b = 11 + rand() % 90;
  // c từ -10 -> 80
  c = -10 + rand() % 91;
  // c từ 0 -> 1000000
  d = rand() % 1000000;

  cout << "\na = " << a << "  " << "\nb = " << b << "   " <<  "\nc = " << c << "   " << "\nd = " << d << endl;

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