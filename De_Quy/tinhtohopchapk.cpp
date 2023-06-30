/*
TÍnh tổ hợp chập K của N
INPUT
10 2
OUTPUT
45
*/

#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

// Uoc chung lon nhat
ll gcd(ll a, ll b) {
  if(a == 0) return b;
  return gcd(b%a, a);
}

// boi chung nho nhat
ll lcm(ll a, ll b) {
  return a / gcd(a, b) * b;
}

int main() {
  system("cls");
  ll a, b;
  cin >> a >> b;
  cout << gcd(a, b) << " " << lcm(a, b);
  return 0;
}