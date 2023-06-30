/*
Cho số nguyên không âm N, hãy tính tổng các chữ số chẵn, tổng các chữ số lẻ của N
INPUT
123456
OUTPUT
12
9
*/

#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int chan(ll n) {
  if(n < 10) {
    if(n % 2 == 0) return n;
    else return 0;
  } else {
    if(n % 10 % 2 == 0) return n % 10 + chan(n / 10);
    return chan(n / 10);
  }
}

ll le(ll n) {
  if(n < 10) {
    if(n % 2 == 0) return 0;
    else return n;
  } else {
    if(n % 10 % 2 == 1) return n % 10 + le(n / 10);
    else return le(n / 10);
  }
}

int main() {
  system("cls");
  ll n;
  cin >> n;
  cout << chan(n) << endl << le(n);
  
  return 0;
}