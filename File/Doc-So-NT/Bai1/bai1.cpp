/*
  Ví dụ: Đọc một số nguyên từ file INPUT.txt. Ghi dữ liệu vào file KETQUA.txt
  + Ghi vào true - nếu số nguyên đó là số nguyên tố 
  + Ghi vào false - nếu số nguyên đó không phải là số nguyên tố 
*/

#include <iostream>
#include <cmath>
using namespace std;
#include <fstream>

// hàm kiểm tra số nguyên tố
bool nt(int n) {
  for(int i = 2; i <= sqrt(n); i++) {
    if(n % i == 0) return false;
  }
  return n > 1;
}

int main() {
  // Đọc dữ liệu
  ifstream FileIn; // Khai báo ra lớp để đọc dữ liệu từ file
  FileIn.open("INPUT.txt");
  if(FileIn.fail() == true) {
    cout << "\nFile khong ton tai: ";
    system("pause"); 
    return 0; // Kết thúc chương trình
  }

  int x;
  FileIn >> x; // Đọc số nguyên từ file
  // Ghi dữ liệu
  ofstream FileOut;
  FileOut.open("KETQUA.txt");

  if(nt(x) == true) 
    FileOut << "TRUE";
  else  
    FileOut << "FALSE";

  FileIn.close(); // Đóng file
  FileOut.close();
  return 0;
}