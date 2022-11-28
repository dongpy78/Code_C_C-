// Thêm một node p vào sau node q
#include <iostream>
using namespace std;
// =========== KHAO BÁO CẤU TRÚC DANH SÁCH LIÊN KẾT ĐƠN ===========
int n = 0; // khai báo biến toàn cục - chứa số lượng phần tử trong danh sách
struct node {
  int data; // dữ liệu của 1 node 
  struct node *pNext; // con trỏ dùng để liên kết giữa các node với nhau
};
typedef struct node NODE;

// Khai báo cấu trúc danh sách liên kết đơn
struct list {
  NODE *pHead;
  NODE *pTail;
};
typedef struct list LIST;

// =========== KHỞI TẠO CẤU TRÚC DANH SÁCH LIÊN KẾT ĐƠN ===========
void KhoiTaoDSLK(LIST &l) {
  // cho 2 node đầu và cuối trỏ đến vùng nhớ rỗng
  l.pHead = NULL;
  l.pTail = NULL;
}

// hàm khởi tạo 1 cái node 
NODE *KhoiTaoNode(int x) {
  NODE *p = new NODE;
  if(p == NULL) {
    cout << "\nKhong du bo nho de cap phat!: ";
    return NULL;
  }
  p ->data = x; // gán giá trị cho data
  p ->pNext = NULL;
  return p;
}

//  hàm thêm node p vào đầu danh sách
void ThemVaoDau(LIST &l, NODE *p) {
  // danh sách đang rỗng
  if(l.pHead == NULL) {
    l.pHead = l.pTail = p;
  }
  else {
    p ->pNext = l.pHead; // dùng con trỏ của node p liên kết với l.pHead
    l.pHead = p; // cập nhật lại l.pHead là p
  }
} 

//  hàm thêm node p vào cuối danh sách
void ThemVaoCuoi(LIST &l, NODE *p) {
  // danh sách đang rỗng
  if(l.pHead == NULL) {
    l.pHead = l.pTail = p;
  }
  else {
    l.pTail ->pNext = p;
    l.pTail = p; // cập nhật lại l.pTail là p
  }
} 

// hàm xóa đầu
void XoaDau(LIST &l) {
  // Nếu danh sách rỗng
  if(l.pHead == NULL) {
    return;
  }
  NODE *p = l.pHead; // node p là node sẽ xóa
  l.pHead = l.pHead ->pNext; // cập nhật lại l.pHead là phần tử kế tiếp
  delete p;
}

// hàm xóa cuối
void XoaCuoi(LIST &l) {
  // Nếu danh sách rỗng
  if(l.pHead == NULL) {
    return;
  }
  // trường hợp danh sách có phần tử 
  if(l.pHead ->pNext == NULL) {
    XoaDau(l);
    return;
  }
  // duyệt từ đầu danh sách đến thằng kế cuối
  for(NODE *k = l.pHead; k != NULL; k = k ->pNext) {
    // phát hiện thằng kế cuối
    if(k ->pNext == l.pTail) {
      delete l.pTail; // xóa đi phần tử cuối
      k ->pNext = NULL; // cho con trỏ của node kế cuối trỏ đến vùng nhớ null
      l.pTail = k; // cập nhật lại l.pTail
      return;
    }
  }
}

// hàm xóa 1 node nằm sau node q trong danh sách
void XoaSauNodeq(LIST &l, NODE *q) {
  // duyệt danh sách từ đầu đến cuối để tìm node q
  for(NODE *k = l.pHead; k != NULL; k = k ->pNext) {
    if(k ->data == q ->data) {
      NODE *g = k ->pNext; // node g chính là node nằm sau node k <=> node mà ta sẽ xóa
      k ->pNext = g ->pNext; // cập nhật mối liên kết giữa node k(node q) với node sau node g
      delete g; // xóa node nằm sau node q
      return;
    }
  }
}

// Xóa một node bất kì 
void XoaNodeCoKhoaBatKi(LIST &l, int x) {
  // nếu node cần xóa nằm đầu danh sách 
  if(l.pHead ->data == x) {
    XoaDau(l);
    return;
  }
  // nếu node cần xóa nằm ở cuối danh sách 
  if(l.pTail ->data == x) {
    XoaCuoi(l);
    return;
  }
  NODE *g = new NODE; // node g là node trỏ đến node nằm trước node cần xóa
  // duyệt danh sách liên kết đơn để tìm 
  for(NODE *k = l.pHead; k != NULL; k = k ->pNext) {
    // phát hiện phần tử cần xóa
    if(k ->data == x) {
      g ->pNext = k ->pNext;
      delete k; // xóa node nằm sau node k
      return;
    }
    g = k; // cho node g trỏ đến node k
  }
}

// xuất danh sách liên kết đơn
void XuatDanhSach(LIST l) {
  for(NODE *k = l.pHead; k != NULL; k = k ->pNext) {
    cout << k ->data << " ";
  }
}

// Thêm node p vào sau node q(nằm trong danh sách liên kết đơn)
void ThemNode_p_VaoSauNode_q(LIST &l, NODE *p) {
  int x;
  cout << "\nNhap gia tri node q: ";
  cin >> x;
  NODE *q = KhoiTaoNode(x);

  // nếu danh sách chỉ có một phần tử và phần tử đó cũng chính là node q => bài toán trở thành thêm vào cuối danh sách
  if(q ->data == l.pHead ->data && l.pHead ->pNext == NULL) {
    ThemVaoCuoi(l, p);
  }
  else {
    // duyệt từ đầu danh sách đến cuối danh sách để tìm node q
    for(NODE *k = l.pHead; k != NULL; k = k ->pNext) {
      if(q ->data == k ->data) {
        NODE *h = KhoiTaoNode(p ->data);
        NODE *g = k ->pNext; // cho node g trỏ đến node nằm sau node q
        h ->pNext = g; // Bước 1: Tạo mối liên kết từ node p đến node g <=> cũng chính là tạo mối liên kết từ node p đến node nằm sau node q
        k ->pNext = h; // Bước 2: Tạo mối liên kết từ node q đến node p <=> chính là node k đến node p
      }
    }
  }
}

// Thêm node p vào trước node q(nằm trong danh sách liên kết đơn)
void ThemNode_p_VaoTruocNode_q(LIST &l, NODE *p) {
  int x;
  cout << "\nNhap gia tri node q: ";
  cin >> x;
  NODE *q = KhoiTaoNode(x); // khởi tạo node q

  // nếu danh sách chỉ tồn tại duy nhất và node này cũng chính là node q luôn - thì vấn đề trở về bài toán thêm node p vào đầu danh sách
  if(q ->data == l.pHead ->data && l.pHead ->pNext == NULL) {
    ThemVaoDau(l, p); // thêm node p vào đầu danh sách
  }  
  else {
    // ========= CÁCH 1: TRONG DANH SÁCH CHỈ TỒN TẠI 1 NODE Q ==========
    // NODE *g = new NODE; // node g chính là node giữ liên kết với các node nằm trước node q trong danh sách 
    // // duyệt danh sách từ đầu đến cuối để tìm node q
    // for(NODE *k = l.pHead; k != NULL; k = k ->pNext) {
    //   // phát hiện node q có tồn tại trong danh sách thì bắt đầu thêm node p vào trước node q
    //   if(q ->data == k ->data) {
    //     // thực hiện bài toán thêm node p vào sau node g là ra vấn đề <=> thêm node p vào trước node q 
    //     p ->pNext = k;
    //     g ->pNext = p;
    //   }
    //   g = k; // giữ liên kết với node nằm trước node q trong danh sách
    // }

    // ========= CÁCH 2: TRONG DANH SÁCH TỒN TẠI TỪ 2 NODE Q TRỞ LÊN ========
    NODE *g = new NODE; 
    for(NODE *k = l.pHead; k != NULL; k = k ->pNext) {
      if(q ->data == k ->data) {
        NODE *h = KhoiTaoNode(p ->data); // mỗi lần phát hiện 1 node q thì ta khởi tạo 1 node p mới <=> khởi tạo node h  
        h ->pNext = k;
        g ->pNext = h;
      }
      g = k; // giữ liên kết với cái node nằm trước node q trong danh sách
    }
  }
}

// ============= CÁCH 1 ===============
// hàm thêm 1 node p vào vị trí bất kì trong danh sách
// void ThemNode_p_VaoViTriBatKi(LIST &l, NODE *p, int vt, int n) {

//   // danh sách đang rỗng 
//   if(l.pHead == NULL || vt == 1) {
//     ThemVaoDau(l, p);
//   }
//   else if(vt == n + 1) {
//     ThemVaoCuoi(l, p);
//   }
//   else {
//     int dem = 0;
//      NODE *g = new NODE; 
//     for(NODE *k = l.pHead; k != NULL; k = k ->pNext) {
//       dem++;
//       if(dem == vt) {
//         NODE *h = KhoiTaoNode(p ->data); // mỗi lần phát hiện 1 node q thì ta khởi tạo 1 node p mới <=> khởi tạo node h  
//         h ->pNext = k;
//         g ->pNext = h;
//         break;
//       }
//       g = k; // giữ liên kết với cái node nằm trước node q trong danh sách
//     }
//   }
// }

// ========= CÁCH 2: dùng biến toàn cục cho biến n  ==========
void ThemNode_p_VaoViTriBatKi(LIST &l, NODE *p, int vt) {

  // danh sách đang rỗng 
  if(l.pHead == NULL || vt == 1) {
    ThemVaoDau(l, p);
  }
  else if(vt == n + 1) {
    ThemVaoCuoi(l, p);
  }
  else {
    int dem = 0;
     NODE *g = new NODE; 
    for(NODE *k = l.pHead; k != NULL; k = k ->pNext) {
      dem++;
      if(dem == vt) {
        NODE *h = KhoiTaoNode(p ->data); // mỗi lần phát hiện 1 node q thì ta khởi tạo 1 node p mới <=> khởi tạo node h  
        h ->pNext = k;
        g ->pNext = h;
        break;
      }
      g = k; // giữ liên kết với cái node nằm trước node q trong danh sách
    }
  }
}

// hàm giải phóng vùng nhớ cho danh sách liên kết đơn
void Giai_Phong_Danh_Sach(LIST &l) {
  // duyệt từ đầu danh sách đến cuối danh sách
  // for(NODE *k = l.pHead; k != NULL; k = k ->pNext) {
  //   delete k; // giải phóng từng cái node trong danh sách
  // }
  NODE *k = NULL;
  while(l.pHead != NULL) {
    k = l.pHead;
    l.pHead = l.pHead ->pNext;
    delete k;
  }
}

// menu
void Menu(LIST &l) {
  int luachon;
  while(true) {
    system("cls");
    cout << "\n\n\t\t ================= MENU =================";
    cout << "\n\t1. Them node vao danh sach: ";
    cout << "\n\t2. Xuat danh sach lien ket don: ";
    cout << "\n\t3. Them node p vao sau node q trong danh sach: ";
    cout << "\n\t4. Them node p vao truoc node q trong danh sach: ";
    cout << "\n\t5. Them node p vao vi tri bat ki trong danh sach: ";
    cout << "\n\t6. Xoa Dau: ";
    cout << "\n\t7. Xoa Cuoi: ";
    cout << "\n\t8. Xoa node sau node q: ";
    cout << "\n\t9. Xoa node co khoa bat ki: ";
    cout << "\n\t0. Thoat: ";
    cout << "\n\n\t\t ================= END =================";

    cout << "\nNhap lua chon: ";
    cin >> luachon;
    if(luachon < 0 || luachon > 9) {
      cout << "\nLua chon khong hop le. Xin kiem tra lai: ";
      system("pause"); // dừng màn hình
    }
    if(luachon == 1) { 
      n++; // cách 2
      int x;
      cout << "\nNhap gia tri so nguyen: ";
      cin >> x;
      NODE *p = KhoiTaoNode(x); // khởi tạo 1 cái node
      ThemVaoCuoi(l, p); // thêm node vào cuối danh sách
    }
    else if(luachon == 2) {
      XuatDanhSach(l);
      system("pause");
    }
    else if(luachon == 3) {
      int x;
      cout << "\nNhap gia tri node p can them vao sau: ";
      cin >> x;
      NODE *p = KhoiTaoNode(x);
      ThemNode_p_VaoSauNode_q(l, p); // thêm node p vào sau node q trong danh sách
    }
    else if(luachon == 4) {
      int x;
      cout << "\nNhap gia tri node p can them vao sau: ";
      cin >> x;
      NODE *p = KhoiTaoNode(x);
      ThemNode_p_VaoTruocNode_q(l, p); // thêm node p vào trước node q trong danh sách
    }
    else if(luachon == 5) {
      // cách 1: 
      // int n = 0;
      // // vòng lặp lấy số lượng node trong danh sách 
      // for(NODE *k = l.pHead; k != NULL; k = k ->pNext) {
      //   n++;
      // }

      int x;
      cout << "\nNhap gia tri node p: ";
      cin >> x;
      NODE *p = KhoiTaoNode(x);

      // nhập vị trí cần thêm cho node p => cần kiểm tra điều kiện
      int vt;
      do {
        cout << "\nNhap vi tri can them node p: ";
        cin >> vt;
        if(vt < 1 || vt > n + 1) {
          cout << "\nVi tri can them phai nam trong doan [1; " << n + 1 << "]";
          system("pause");
        }
      }while(vt < 1 || vt > n + 1);

      // ThemNode_p_VaoViTriBatKi(l, p, vt, n); Cách 1
      ThemNode_p_VaoViTriBatKi(l, p, vt); // Cách 2
    }
    else if(luachon == 6) {
      XoaDau(l);
    }
    else if(luachon == 7) {
      XoaCuoi(l);
    }
    else if(luachon == 8) {
      int x;
      cout << "\nNhap node q: ";
      cin >> x;
      NODE *q = KhoiTaoNode(x);
      XoaSauNodeq(l, q);
    }
    else if(luachon == 9) {
      int x;
      cout << "\nNhap node can xoa: ";
      cin >> x;
      XoaNodeCoKhoaBatKi(l, x);
    }
    else {
      break; // thoát khỏi vòng lặp hiện tại
    }
  }
}

int main() {
  LIST l;
  KhoiTaoDSLK(l); // luôn luôn gọi hàm khỏi tạo danh sách liên kết đơn trước khi thao tác với danh sách
  Menu(l);
  Giai_Phong_Danh_Sach(l);

  XuatDanhSach(l);

  system("pause");
}