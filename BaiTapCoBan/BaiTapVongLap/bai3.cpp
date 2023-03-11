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

bool nt(int n) {
  for(int i = 2; i <= sqrt(n); i++) 
    if(n % i == 0) return false;
    return n  > 1;
}

int main() {
  system("cls");
  int n;
  do {  
    cout << "Nhap n (n > 0) : ";
    cin >> n;
    if(n < 0) cout << "\nNhap lai: ";
  }while(n < 0);

  // Kiểm tra đối xúng
  int temp = n; // lưu biến phụ
  int sodaonguoc = 0;
  int dem = log10(temp);
  while(temp != 0) {
    int chuso = temp % 10;
    temp /= 10;
    sodaonguoc += chuso * pow(10, dem--);
  }
  if(n == sodaonguoc) cout << "\nLa so doi xung: ";
  else cout << "\nKhong phai la so doi xung: ";

  // Kiểm tra chính phương
  if(sqrt((double)n) == (int)sqrt((double)n)) 
    cout << "\nLa so chinh phuong: ";
  else cout << "\nKhong phai la so chinh phuong: ";
  
  // Kiem tra nguyen to:
  if(nt(n) == false) cout << "\nKhong phai so nguyen to: ";
  else cout << "\nLa so nguyen to: ";
  return 0;
}