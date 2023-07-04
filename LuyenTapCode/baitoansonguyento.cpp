#include <iostream>
#include <cmath>
using namespace std;

int nt(int n) {
  for(int i = 2; i <= sqrt(n); i++)
    if(n % i == 0) return 0;
  return n > 1;
}
// In ra so nguyen to nho hon hoac bang n
void in_so_nt(int n) {
  for(int i = n; i >= 2; i--) {
    if(nt(i)) cout << i << " ";
  }
}
// Tim so nt nho nhat va lon hon n: 
int tim_so_nt(int n) {
  int next_nt = n + 1;
  while(!nt(next_nt)) next_nt++;
  return next_nt;
}
// In ra n so nguyen to dau tien
void in_n_so_dau_tien(int n) {
  int dem = 0, i = 2;
  while(dem < n) {
    if(nt(i)) {
      cout << i << " ";
      dem++;
    }
    i++;
  }
}
  
int main() {
  system("cls");
  int n;
  cin >> n;
  in_so_nt(n);
  cout << endl;
  cout << "So nguyen to nho nhat: " << tim_so_nt(n);
  cout << endl;
  in_n_so_dau_tien(n);
}

