/*
Cho số nguyên không âm, hãy kiểm tra xem tất cả các chữ số N có phải đều là số chẵn không?
INPUT
2280820
OUTPUT
YES
*/

#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int check(ll n) {
  if(n % 2 == 0) {
    if(n % 2 == 0) return 1;
    else return 0;
  } else {
    if(n % 10 % 2 == 1) // kiem tra chu so o hang don vi
      return 0;
    else return check(n / 10);
  }
}

int main() {
  system("cls");
  ll n;
  cin >> n;
  if(check(n)) cout << "YES";
  else cout << "NO";
  return 0;
}