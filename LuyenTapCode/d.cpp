#include <iostream>
using namespace std;
#include <string>

class sinhvien {
  // thuộc tính 
  private:
    string hoten;
    string maso;
    float diem_toan;
    float diem_ly;
  // phương thức 
  public:
    void Nhap_Thong_Tin();
    void Xuat_Thong_Tin();

    // cơ chế đóng gói GETTER và SECTTER
    string Getter_Hoten() {
      return hoten;
    }
    void Setter_Hoten(string HOTEN) {
      hoten = HOTEN;
    }
  // hàm tạo và hàm hủy 
  sinhvien();
  ~sinhvien();
};

void sinhvien::Nhap_Thong_Tin() {
  cout << "\nNhap ho ten: ";
  getline (cin, hoten);
  cout << "\nNhap ma so sinh vien: ";
  getline (cin, maso);
  cout << "\nNhap diem toan: ";
  cin >> diem_toan;
  cout << "\nNhap diem ly: ";
  cin >> diem_ly;
}

void sinhvien::Xuat_Thong_Tin() {
  cout << "\nHo ten: " << hoten;
  cout << "\nMa so: " << maso;
  cout << "\nDiem toan" << diem_toan;
  cout << "\nDiem ly" << diem_ly;
}

sinhvien::sinhvien() {

}
sinhvien::~sinhvien() {

}

int main() {
  system("cls");
  sinhvien vandong;
  
  cout << "\nNhap thong tin sinh vien: ";
  vandong.Nhap_Thong_Tin();
  vandong.Setter_Hoten("Vo Ngoc Quynh Nhu");
  cout << "\nXuat thong tin sinh vien: ";
  vandong.Xuat_Thong_Tin();

  return 0;
}