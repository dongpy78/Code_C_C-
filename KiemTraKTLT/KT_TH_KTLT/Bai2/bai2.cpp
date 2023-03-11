#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    system("cls");
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= dem && dem < k)
            dem += 1;
    }
    cout << dem;
}