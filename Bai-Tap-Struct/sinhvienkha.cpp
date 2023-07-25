

#include <stdio.h>
#include <stdlib.h>

struct SinhVien {
  char ten[100];
  char lop[100];
  double gqa;
};

typedef struct SinhVien SinhVien;

// Nhap thong tin sinh vien va tra ve sinh vien sau khi nhap
void nhap(SinhVien *x) {
  printf("Nhap ten: "); gets(x->ten);
  printf("Nhap lop: "); gets(x->lop);
  printf("Nhap gpa: "); scanf("%lf", &x->gpa);
}

void in(SinhVien x) {
  printf("%s %s %.2lf\n", x.ten, x.lop, x.gqa);
}

// Sap xep, tim kiem, tim min, max, trung binh...
void timkiem(SinhVien a[], int n, char name[])  {
  int find = 0;
  for(int i = 0; i < n; i++) {
    if(strcmp(name, a[i].ten) == 0) {
      in(a[i]);
      find = 1;
    }
  }
  if(!find) printf("Khong tim thay sinh vien: \n");
}

// In ra nhung sinh vien co diem gqa cao nhat
void maxGqa(SinhVien a[], int n) {
  double max = 0;
  for(int i = 0; i < n; i++) {
    max = fmax(max, a[i].gqa);
  }
  printf("Thong tin cac sinh vien co diem gqa cao nhat: ");
  for(int i = 0; i < n; i++) {
    if(max == a[i].gqa) in(a[i]);
  }
}

void xoaThongTin(SinhVien a[], int n, char name[]) {
  for(int i = 0; i < n; i++) {
    if(strcmp(a[i].ten, name) == 0) {
      for(j = i  + 1; j < n-1; j++) {
        a[j] = a[j + 1];
      }
      *(n)--;
    }
  }
}

int main() {

  return 0;
}