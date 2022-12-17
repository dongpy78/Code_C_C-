/*
  Đề: Đọc 1 dãy số nguyên từ file INPUT.txt
  + Dòng đầu tiên là số lượng các số nguyên hiện có trong file
  + Dòng tiếp theo là 1 dãy các số nguyên tố có trong file
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

  int arr[100];

  // Đọc mảng số nguyên từ file
  int n;
  FileIn >> n; // Đọc số nguyên ở dòng đầu tiên
  for(int i = 0; i < n; i++) {
    FileIn >> arr[i]; // Đọc dữ liệu từ file
  }

  // Ghi dữ liệu lên file
  ofstream FileOut;
  FileOut.open("KETQUA.txt");
  for(int i = 0; i < n; i++) {
    if(nt(arr[i])== true) 
      FileOut << arr[i];
  }
 
  FileIn.close(); // Đóng file
  FileOut.close();
  return 0;
}