#include <iostream>
#include <cmath>
using namespace std;
#define ll long long
 
int S(int n) {
  if(n == 1) return 2;
  return (2*n) + n + S(n-1);
}

int main() {
  system("cls");
  int n;
  cin >> n;
  cout << S(n);
  return 0;
}