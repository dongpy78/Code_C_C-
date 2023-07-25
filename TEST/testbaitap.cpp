#include <iostream>

using namespace std;


long long gt(int n) {
  long long kq = 1;
  for(int i = 1; i <= n; i++) kq *= i;
  return kq;
}

int main() {
  long long n;
  cin >> n;
  cout << gt(n);
  return 0;
}