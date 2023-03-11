#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int TimChinhPhuong(int a[], int l, int r) {
    if (l > r) return 0;
    int m = (l+r)/2;
    if (sqrt(a[m]) * sqrt(a[m]) == a[m]) return 1 + TimChinhPhuong(a, l, m-1) + TimChinhPhuong(a, m+1, r);
    return TimChinhPhuong(a, l, m-1) + TimChinhPhuong(a, m+1, r);
}

int main() {
    ifstream file_in ("CAU1.INT");
    int n;
    file_in >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        file_in >> a[i];
    }
    ofstream file_out ("CAU1.OUT");
    file_out << TimChinhPhuong(a, 0, n-1);
}