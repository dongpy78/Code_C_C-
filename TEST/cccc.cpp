#include <iostream>
using namespace std;

double interest(double n, double M) {
    if (n < 1.0 / 4) {
        return M * (1 + 0.046 * n);
    } else if (n < 1.0 / 2) {
        return M * (1 + 0.056 * n);
    } else if (n < 1) {
        return M * (1 + 0.066 * n);
    } else {
        return M * (1 + 0.076 * n);
    }
}

int main() {
  system("cls");
    double n, M;
    cin >> n >> M;
    double result = interest(n, M);
    cout.precision(6);
    cout << fixed << result << endl;
    return 0;
}
