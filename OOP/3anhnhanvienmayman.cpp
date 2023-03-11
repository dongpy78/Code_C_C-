/* Ở một xóm trọ Ba Con Sâu nọ, có 3 chàng từ tỉnh lẻ lên thành phố lập nghiệp.
Với một ý chí quyết tâm và hừng hực, 3 anh đã may mắn được nhận làm việc ở các 
công ty tầm cỡ quốc gia với các chức danh lần lượt như sau 
NHÂN VIÊN SỬA ỐNG NƯỚC
NHÂN VIÊN GIAO HÀNG
NHÂN VIÊN XE ÔM 4.0
1. Hãy phân tích và mô tả các thông tin cần thiết để quản lí 3 nhân viên trên
2. Tính tiền lương hàng tháng của 3 nhân viên trên 
Biết: 
NHÂN VIÊN SỬA ỐNG NƯỚC: số giờ sửa * 50000
NHÂN VIÊN GIAO HÀNG:  số hàng giao * 33500
NHÂN VIÊN XE ÔM 4.0: số km * 10000
 */

#include <iostream>
using namespace std;
#include <string>

/* KHAI BÁO CẤU TRÚC LỚP NHÂN VIÊN SỬA ỐNG NƯỚC */
class NhanVienSuaOngNuoc {
  private:
    string hoten;
    int tuoi;
    string gioitinh;
    string diachi;
    string sdt;
    float chieucao;
    float cannang;
    float sogiosua;
  public:
    void Nhap();
    void Xuat();
    float TinhTienLuong();

    NhanVienSuaOngNuoc();
    ~NhanVienSuaOngNuoc();

};

// Hàm nhập thông tin nhân viên sửa ống nước
void NhanVienSuaOngNuoc::Nhap() {
  fflush(stdin);
  cout << "\nNhap ho ten: ";
  getline(cin, hoten);
  cout << "\nNhap tuoi: ";
  cin >> tuoi;
  fflush(stdin);
  cout << "\nNhap gioi tinh: ";
  getline(cin, gioitinh);
  cout << "\nNhap dia chi: ";
  getline(cin, diachi);
  cout << "\nNhap so dien thoai: ";
  getline(cin, sdt);
  cout << "\nNhap chieu cao: ";
  cin >> chieucao;
  cout << "\nNhap can nang: ";
  cin >> cannang;
}

// Hàm xuất thông tin nhân viên sửa ống nước
void NhanVienSuaOngNuoc::Xuat() {
  cout << "\nHo ten: " << hoten;
  cout << "\nTuoi: " << tuoi;
  cout << "\nGioi tinh: " << gioitinh;
  cout << "\nDia chi: " << diachi;
  cout << "\nSo dien thoai: " << sdt;
  cout << "\nChieu cao: " << chieucao;
  cout << "\nCan nang: " << cannang;
}

// hàm tính tiên lương 
float NhanVienSuaOngNuoc::TinhTienLuong() {
  return sogiosua * 50000;
}

// hàm tạo
NhanVienSuaOngNuoc::NhanVienSuaOngNuoc() {

}

// hàm hủy
NhanVienSuaOngNuoc::~NhanVienSuaOngNuoc() {
  
}

/* KHAI BÁO CẤU TRÚC LỚP NHÂN VIÊN GIAO HÀNG */
class NhanVienGiaoHang {
  private:
    string hoten;
    int tuoi;
    string gioitinh;
    string diachi;
    string sdt;
    float chieucao;
    float cannang;
    float sohanggiao;
  public:
    void Nhap();
    void Xuat();
    float TinhTienLuong();

    NhanVienGiaoHang();
    ~NhanVienGiaoHang();

};

// Hàm nhập thông tin nhân viên giao hàng
void NhanVienGiaoHang::Nhap() {
  fflush(stdin);
  cout << "\nNhap ho ten: ";
  getline(cin, hoten);
  cout << "\nNhap tuoi: ";
  cin >> tuoi;
  fflush(stdin);
  cout << "\nNhap gioi tinh: ";
  getline(cin, gioitinh);
  cout << "\nNhap dia chi: ";
  getline(cin, diachi);
  cout << "\nNhap so dien thoai: ";
  getline(cin, sdt);
  cout << "\nNhap chieu cao: ";
  cin >> chieucao;
  cout << "\nNhap can nang: ";
  cin >> cannang;
}

// Hàm xuất thông tin nhân viên giao hàng
void NhanVienGiaoHang::Xuat() {
  cout << "\nHo ten: " << hoten;
  cout << "\nTuoi: " << tuoi;
  cout << "\nGioi tinh: " << gioitinh;
  cout << "\nDia chi: " << diachi;
  cout << "\nSo dien thoai: " << sdt;
  cout << "\nChieu cao: " << chieucao;
  cout << "\nCan nang: " << cannang;
}

// hàm tính tiền lương nhân viên giao hàng
float NhanVienGiaoHang::TinhTienLuong() {
  return sohanggiao * 33500;
}

// hàm tạo
NhanVienGiaoHang::NhanVienGiaoHang() {

}

// hàm hủy
NhanVienGiaoHang::~NhanVienGiaoHang() {
  
}

/* KHAI BÁO CẤU TRÚC LỚP NHÂN VIÊN XE ÔM 4.0 */
class NhanVienXeOm {
  private:
    string hoten;
    int tuoi;
    string gioitinh;
    string diachi;
    string sdt;
    float chieucao;
    float cannang;
    float sokm;
  public:
    void Nhap();
    void Xuat();
    float TinhTienLuong();

    NhanVienXeOm();
    ~NhanVienXeOm();

};

// Hàm nhập thông tin nhân viên xe ôm
void NhanVienXeOm::Nhap() {
  fflush(stdin);
  cout << "\nNhap ho ten: ";
  getline(cin, hoten);
  cout << "\nNhap tuoi: ";
  cin >> tuoi;
  fflush(stdin);
  cout << "\nNhap gioi tinh: ";
  getline(cin, gioitinh);
  cout << "\nNhap dia chi: ";
  getline(cin, diachi);
  cout << "\nNhap so dien thoai: ";
  getline(cin, sdt);
  cout << "\nNhap chieu cao: ";
  cin >> chieucao;
  cout << "\nNhap can nang: ";
  cin >> cannang;
}

// Hàm xuất thông tin nhân viên xe ôm
void NhanVienXeOm::Xuat() {
  cout << "\nHo ten: " << hoten;
  cout << "\nTuoi: " << tuoi;
  cout << "\nGioi tinh: " << gioitinh;
  cout << "\nDia chi: " << diachi;
  cout << "\nSo dien thoai: " << sdt;
  cout << "\nChieu cao: " << chieucao;
  cout << "\nCan nang: " << cannang;
}

// Hàm tính tiền nhân viên xe ôm
float NhanVienXeOm::TinhTienLuong() {
  return sokm * 10000;
}
// hàm tạo
NhanVienXeOm::NhanVienXeOm() {

}

// hàm hủy
NhanVienXeOm::~NhanVienXeOm() {
  
}

int main() {
  system("cls");
  NhanVienSuaOngNuoc nhanvienongnuoc;
  NhanVienGiaoHang nhanviengiaohang;
  NhanVienXeOm nhanvienxeom;
  cout << "\n\n\t\t NHAP THONG TIN NHAN VIEN SUA ONG NUOC: \n";
  nhanvienongnuoc.Nhap();
  cout << "\n\n\t\t NHAP THONG TIN NHAN VIEN GIAO HANG: \n";
  nhanvienxeom.Nhap();
  cout << "\n\n\t\t NHAP THONG TIN NHAN VIEN XE OM: \n";
  nhanvienxeom.Nhap();
  cout << "\n\n\t\t THONG TIN NHAN VIEN SUA ONG NUOC: \n";
  nhanvienongnuoc.Xuat();
  cout << "\n\n\t\t LUONG \n";
  nhanvienongnuoc.TinhTienLuong();

  cout << "\n\n\t\t THONG TIN NHAN VIEN GIAO HANG: \n";
  nhanvienxeom.Xuat();
  cout << "\n\n\t\t LUONG \n";
  nhanviengiaohang.TinhTienLuong();

  cout << "\n\n\t\t THONG TIN NHAN VIEN XE OM: \n";
  nhanvienxeom.Xuat();
  cout << "\n\n\t\t LUONG \n";
  nhanvienxeom.TinhTienLuong();

  return 0;
}