#include <iostream>
#include <algorithm>
using namespace std;

int n;
int a[100];
int tong = 0;

void CauLenh(int f, int l) {
    if (f == l) { 
        if (a[f] == 1) tong -= 1;
        else tong += 1;
        return;
    }
    int x = (f+l)/2;
    CauLenh(f, x);
    CauLenh(x+1, l);
}


int main() {
  system("cls");
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    CauLenh(0, n-1);
    if (tong < 0) tong *= -1;
    cout << tong;
}