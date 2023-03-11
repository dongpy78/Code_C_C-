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
Sau quá trình khảo sát thị trường và thấy tiềm năng của các chị em nội trợ về
nhu cầu liên hệ các anh thợ SỬA ỐNG NƯỚC ngày càng tăng, đồng thời dịch vụ GIAO
HÀNG ngày càng cao, song song đó cuộc cách mạng 4.0 ngày càng được ứng dụng rộng
rãi, và nền kinh tế chia sẻ cũng dần được hình thành dẫn đến việc các anh XE ÔM
4.0 cũng ăn nên làm ra.
Và điều gì đến cũng đã đến - trời không phụ lòng người, với tất cả niềm đam mê và
yêu nghề của mình - 3 chàng tỉnh lẻ ngày nào giờ đã quyết định ngồi lại với nhau
để cùng chơi một cuộc chơi lớn hơn, mang tầm cỡ xuyên quốc gia và cạnh tranh trực
tiếp với các ông lớn trên thế giới như Lazada, Alibaba, Amazon, Jav...
Công ty Ba Con Sói viết định thuê thêm nhiều nhân viên nhằm đáp ứng nhu cầu của 
khách hàng và cụ thể là không muốn bỏ qua miếng anh ngon này.
3. Hãy giúp công ty Ba Con Sói viết một ứng dụng quản lí các nhân viên đã đề cập
4. Tính tổng tiền lương hàng tháng của các nhân viên
5. Thống kê các nhân viên giảm dần theo lương
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

// Thiết kế menu xử lí 
void Menu(NhanVienSuaOngNuoc ds_nv_suaongnuoc[], NhanVienGiaoHang ds_nv_giaohang[], NhanVienXeOm ds_nv_xeom[], int n, int m, int l) {
  int luachon;

  while(true) {
    system("cls");
    cout << "\n\n\t\t ============= CHUONG TRINH QUAN LY =============";
    cout << "\n1.Nhap thong tin nhan vien SUA ONG NUOC:";
    cout << "\n2.Nhap thong tin nhan vien GIAO HANG:";
    cout << "\n3.Nhap thong tin nhan vien XE OM:";
    cout << "\n4.Xuat danh sach thong tin nhan vien SUA ONG NUOC:";
    cout << "\n5.Xuat danh sach thong tin nhan vien GIAO HANG:";
    cout << "\n6.Xuat danh sach thong tin nhan vien XE OM:";
    cout << "\n0.KET THUC CHUONG TRINH:";
    cout << "\n\n\t\t ====================== END =====================";
    cout << "\nNhap lua chon: ";
    cin >> luachon;
    if(luachon < 0 ||luachon > 6) {
      cout << "\nLUA CHON KHONG HOP LE. XIN KIEM TRA LAI";
    }
    else if(luachon == 0) {
      break;
    }
    else if(luachon == 1) {
      NhanVienSuaOngNuoc nv_suaongnuoc;
      cout << "\n\n\t\t NHAP THONG TIN NHAN VIEN SUA ONG NUOC\n";
      nv_suaongnuoc.Nhap();

      // thêm đối tượng giá trị "nv_suaongnuoc" vào danh sách "ds_nv_suaongnuoc"
      ds_nv_suaongnuoc[n] = nv_suaongnuoc;
      n++;
    }
    else if(luachon == 2) {
      NhanVienGiaoHang nv_giaohang;
      cout << "\n\n\t\t NHAP THONG TIN NHAN VIEN GIAO HANG\n";
      nv_giaohang.Nhap();

      // thêm đối tượng giá trị "nv_giao hàng" vào danh sách "ds_nv_suaongnuoc"
      ds_nv_giaohang[m] = nv_giaohang;
      m++;
    }
    else if(luachon == 3) {
      NhanVienXeOm nv_xeom;
      cout << "\n\n\t\t NHAP THONG TIN NHAN VIEN XE OM CONG NGHE\n";
      nv_xeom.Nhap();

      // thêm đối tượng giá trị "nv_giao hàng" vào danh sách "ds_nv_suaongnuoc"
      ds_nv_xeom[l] = nv_xeom;
      l++;
    }
    else if(luachon == 4) {
     cout << "\n\n\t\t DANH SACH THONG TIN NHAN VIEN SUA ONG NUOC \n";
     for(int i = 0; i < n; i++) {
        cout << "\n\n\t\t THONG TIN NHAN VIEN SUA ONG NUOC THU " << i + 1;
        ds_nv_suaongnuoc[i].Xuat();
     }
     system("pause");

    }
    else if(luachon == 5) {
     cout << "\n\n\t\t DANH SACH THONG TIN NHAN VIEN GIAO HANG \n";
     for(int i = 0; i < m; i++) {
        cout << "\n\n\t\t THONG TIN NHAN VIEN GIAO HANG THU " << i + 1;
        ds_nv_giaohang[i].Xuat();
     }
     system("pause");

    }
    else if(luachon == 6) {
     cout << "\n\n\t\t DANH SACH THONG TIN NHAN VIEN XE OM CONG NGHE \n";
     for(int i = 0; i < l; i++) {
        cout << "\n\n\t\t THONG TIN NHAN VIEN XE OM THU " << i + 1;
        ds_nv_xeom[i].Xuat();
     }
     system("pause");
    }
    
  }
}

int main() {
  // system("cls");
  NhanVienSuaOngNuoc ds_nv_suaongnuoc[100]; // mảng 1 chiều các nhân viên sửa ống nước
  NhanVienGiaoHang ds_nv_giaohang[100]; // mảng 1 chiều các nhân viên giao hàng
  NhanVienXeOm ds_nv_xeom[100]; // mảng 1 chiều các nhân viên xe ôm
  int n = 0; // số lượng nhân viên sửa ống nước 
  int m = 0;  // số lượng nhân viên giao hàng
  int l = 0;  // số lượng nhân viên công nghệ
  Menu(ds_nv_suaongnuoc, ds_nv_giaohang, ds_nv_xeom, n, m, l);
  return 0;
}