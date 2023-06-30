/*
Cho mảng A[] gồm N phần tử, nhiệm vụ của bạn là đếm xem trong mảng có bao nhiêu số chẵn,
bao nhiêu số lẻ, tổng phần tử là số chẵn, tổng các phần tử là số lẻ.

--> dòng đầu tiên in ra số lượng số chẵn, dòng 2 in ra số luọng số lẻ. Dòng thứ 3 in ra tổng các số chẵn.
    Dòng thứ 4 in ra tổng các số lẻ.
INPUT
6
-711 327 372 779 451 -864
OUTPUT
2
4
-492
846
*/

#include <iostream>
using namespace std;

int main() {
  system("cls");
  int n;
  cin >> n;
  int a[n];
  
  // Nhap mang
  for(int i = 0; i < n; i++) cin >> a[i];

  int chan = 0, le = 0, tong_chan = 0, tong_le = 0;

  for(int i = 0; i < n; i++) {
    if(a[i] % 2 == 0) {
      chan++;
      tong_chan += a[i];
    } else {
      le++;
      tong_le += a[i];
    }
  }

  cout << chan << endl << le << endl << tong_chan << endl << tong_le;
  
  return 0;
}