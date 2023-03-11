/*
 Nhập vào một số nguyên dương n (n > 0) . Hãy cho biết
 a. Có phải là số đối xứng? Vd: 121, 121021
 b. Có phải là số chính phương? Vd: 0, 1, 4, 9, 16, 25
 c. Có phải là số nguyên tố? Vd: 2, 3, 5, 7, 11, 13
 d. Các chữ số có tăng hay giảm dần không?
*/
#include <iostream>
#include <cmath>
using namespace std;


int main() {
  system("cls");
  int n;
  cout << "\nNhap n = ";
  cin >> n;
  int tam = n;
  int dem = log10(tam);
  int sodaonguoc = 0;
  while(tam != 0) {
    int chuso = tam % 10;
    tam /= 10;
    sodaonguoc += chuso * pow(10, dem--);
  }
  if(n == sodaonguoc) cout << "\nSo " << n << " la so doi xung: ";
  else cout << "\nSo " << n << " khong phai la so doi xung: ";
  if(sqrt((double)n) == (int)sqrt((double)n)) 
    cout << endl << n << " la so chinh phuong: ";
  else cout << endl << n << " khong phai la so chinh phuong: ";
  return 0;
}
