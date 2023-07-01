/*
Cho mảng số nguyên A[] gồm N phần tử, tìm số lớn nhất mà mọi số trong mảng đều chia hết cho số đó.
INPUT
12
994626 994448 996897 995790 999692 993222 991401 999038 997163 990016 993004 990549
*/


#include <iostream>
#define ll long long
using namespace std;

ll ucln(ll a, ll b) {
  if(a == 0) return b;
  return ucln(b % a, a);
}

int main() {
  system("cls");
  int n;
  cin >> n;
  int a[n];  
  // Nhap mang
  for(int i = 0; i < n; i++) cin >> a[i];

  ll uc = 0;

  for(int i = 0; i < n; i++) {
    uc = ucln(uc, a[i]);
  }
  cout << uc;

}