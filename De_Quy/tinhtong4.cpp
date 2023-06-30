/*
Tính tổng hàm S(n) = -1 + 2 - 3 + 4 - 5 + 6 +...+(-1)^n * n bằng đệ quy
INPUT
919
OUTPUT
-460
*/

#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

ll S(int n) {
  if(n == 0) return 0;
  else {
    if(n % 2 == 0) return n + S(n-1);
    else return -n + S(n-1);
  }
}

int main() {
  system("cls");
  int n;
  cin >> n;
  cout << S(n);
  return 0;
}