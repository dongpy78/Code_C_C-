/*
Cho một số nguyên không âm N, hãy in ra N theo thứ tự các chữ số từ trái qua phải và 
từ phải qua trái. Chú ý phải sử dụng hàm đệ quy cho cả 2 yêu cầu
INPUT
21218
OUTPUT
2 1 2 1 8
8 1 2 1 2
*/

#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

void in_phai_qua_trai(ll n) {
  if(n < 10) cout << n;
  else {
    cout << n % 10 << " ";
    in_phai_qua_trai(n / 10);
  }
}

void in_trai_qua_phai(ll n) {
  if(n < 10) cout << n << " ";
  else {
    in_trai_qua_phai(n / 10);
    cout << n % 10 << " ";
  }
}
 
int main() {
  system("cls");
  ll n;
  cin >> n;
  in_trai_qua_phai(n);
  cout << endl;
  in_phai_qua_trai(n);


  return 0;
}