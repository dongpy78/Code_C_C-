#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

// So nguyen to
bool SoNguyenTo(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return n > 1;
}

int main() {
  system("cls");
  // Lay du lieu
  string duLieuVao;
  getline(cin, duLieuVao);

  // Xu ly du lieu
  stringstream chuoi(duLieuVao);
  string chuaSo;

  int tong = 0;
  while (getline(chuoi, chuaSo, ' ')) {
    int x = stoi(chuaSo);
    if (SoNguyenTo(x)) {
        cout << x << ' ';
        tong += x;
    }
  }
  if (tong == 0) cout << '-';
  cout << endl << tong;
}
