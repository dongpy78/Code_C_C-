/*
  Đề: Đọc một dãy số nguyên từ file INPUT.txt
  INPUT.txt
  1 2 3 4 5 (File không cho biết trước số lượng phần tử trong mảng)
  Ghi vào file KETQUA.txt các số nguyên tố có trong mảng 
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
  int i = 0;
  int dem = 0;
  // đọc mảng số nguyên từ file bằng cách kiểm tra nếu con trỏ chỉ vị chưa đến cuối file thì tiếp tục đọc
  while(!FileIn.eof()) { // tương đương !FileIn.eof(), FileIn.eof() == false
    FileIn >> arr[i]; // Đọc từng số nguyên có trong file
    i++;
    dem++;
  }

  // Ghi dữ liệu lên file
  ofstream FileOut;
  FileOut.open("KETQUA.txt");

  for(int i = 0; i < dem; i++) {
    if(nt(arr[i]) == true)
      FileOut << "   " << arr[i];
  }
 
  FileIn.close(); // Đóng file
  FileOut.close();
  return 0;
}

