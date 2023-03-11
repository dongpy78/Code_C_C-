#include <iostream>
#include <fstream>
using namespace std;

int n;
int tt[100];

ifstream file_in ("CAU3.INT");
ofstream file_out ("CAU3.OUT");

void In() {
    for (int i = 0; i < n; i++) {
        if (tt[i] == 0) file_out << "T ";
        else file_out << "P ";
    }
    file_out << endl;
}

void Thu(int vt) {
    for (int i = 0; i <= 1; i++) {
        tt[vt] = i;
        if (vt < n-1) Thu(vt+1);
        else In();
        tt[vt] = 0;
    }
}

int main() {
    file_in >> n;
    Thu(0);
}