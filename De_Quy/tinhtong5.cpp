/*
Cho một số nguyên không âm N, hãy in ra chữ số lớn nhất và chữ số nhỏ nhất của N
INPUT
1256782
OUTPUT
8 1
*/

#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int mindigit(ll n) {
  if(n < 10) return n;
  return fmin(n%10, mindigit(n / 10));
  // else {
  //   int tam = mindigit(n/10);
  //   if(n % 10 < tam) return n % 10;
  //   else return tam;
  // }
}

int maxdigit(ll n) {
  if(n < 10) return n;
  return fmax(n%10, maxdigit(n/10));
}

int main() {
  system("cls");
  int n;
  cin >> n;
  cout << mindigit(n) << " " << maxdigit(n);
  return 0;
}