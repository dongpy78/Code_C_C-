/*
Đếm số lượng chẵn lẻ trong mảng
INPUT
5
2 10 2 9 3
OUTPUT
3 2
*/

#include <iostream>
using namespace std;

int main() {
  system("cls");
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];

  int chan = 0, le = 0;
  for(int i = 0; i < n; i++) {
    if(a[i] % 2 == 0) chan++;
    else le++;
  }

  cout << chan << " " << le;
  return 0;
}