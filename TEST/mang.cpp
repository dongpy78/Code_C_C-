#include <iostream>
using namespace std;

void nhap_mang(int a[], int n) {
  for(int i = 0; i < n; i++) {
    cout << "Nhap vao a["<< i <<"] = ";
    cin >> a[i];
  }
}

void xuat_mang(int a[], int n) {
  for(int i = 0; i < n; i++) 
    cout << a[i] << " ";
}

bool day_tang_dan(int a[], int n) {
  int dem = 0;
  for(int i = 0; i < n-1; i++) {
    if(a[i+1] >= a[i]) dem++;
  }
  if(dem == n-1) return true;
  else return false;
}

int second_max(int a[], int n) {
  int max1 = -1e9, max2 = -1e9;
  for(int i = 0; i < n; i++) {
    if(a[i] > max1) {
      max2 = max1;
      max1 = a[i];
    } else if(a[i] > max2) {
      max2 = a[i];
    }
  }
  return max2;
}


// int second_max(int a[], int n) {
//   int max1 = -1e9, max2 = -1e9;
//   for(int i = 0; i < n; i++) {
//     if(a[i] > max) {
//       max2 = max1;
//       max1 = a[i];
//     } else if(a[i] > max2) {
//       max2 = a[i];
//     }
//   }
//   cout << max2;
// }

int main() {
  system("cls");
  int n;
  cin >> n;
  int a[n];
  nhap_mang(a, n);
  xuat_mang(a, n);
  cout << endl;
  cout << "So lon thu 2 trong mang: " << second_max(a, n);
  cout << endl;
  if(day_tang_dan(a, n)) cout << "Day so tang dan";
  else cout << "Day so khong tang";
}