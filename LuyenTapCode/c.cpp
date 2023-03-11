#include <iostream>
#include <string>
using namespace std;

class sinhvien {
  private: 
    string hoten;
    string maso;
    float diemtoan;
    float diemvan;
  public:
  void NhapThongTin();
  void XuatThongTin();
};


void sinhvien::NhapThongTin() {
  cout << "\nNhap ten: ";
  getline(cin, hoten);
  cout << "\nNhap ma so: ";
  getline(cin, maso);
  cout << "\nNhap diem toan: ";
  cin >> diemtoan;
  cout << "\nNhap diem van: ";
  cin >> diemvan;
}

void sinhvien::XuatThongTin() {
  cout << "\nTen: " << hoten;
  cout << "\nMa so: " << maso;
  cout << "\nDiem toan: " << diemtoan;
  cout << "\nDiem van " << diemvan;

}

int main() {
  system("cls");
  sinhvien vandong;
  vandong.NhapThongTin();
  vandong.XuatThongTin();
  return 0;
}