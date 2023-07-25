#include <iostream>
#include <cmath>
using namespace std;

double lai(double m, double n, double ls) {
    for (int i = 0; i < n; i++) {
        m = m * (1 + ls);
    }
    return m;
}

int main() {
    double n, m;
    cin >> n >> m;
    double result;

    if (n < 0.25) result = lai(m, n, 4.6/100);
    else if (n < 0.5) result = lai(m, n, 5.6/100);
    else if (n < 1) result = lai(m, n, 6.6/100);
    else result = lai(m, n, 7.6/100);

    
    printf("%.4lf", result);
    return 0;
}
