/* Nhập x, n. Tính S(x, n) bằng đệ quy
   S(x, n) = x + x^3/3! + x^5/5! + ... + x^2n+1/(2n+1)
 */ 

#include <iostream>
using namespace std;
#include <cmath>

long long GT(int n) {
    if (n <= 1) return 1;
    return n * GT(n-1);
}

float S(int x, int n) {
    if (n == 0) return x;
    return pow(x, 2*n+1)/GT(2*n+1) + S(x, n-1);
}

int main() {
    int x, n;
    cin >> x >> n;
    cout << S(x, n);
}