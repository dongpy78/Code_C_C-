#include <iostream>
#include <fstream>
using namespace std;

void bubble_sort(int a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void read_file(const string& filename, int a[], int& n) {
    ifstream filein(filename);
    filein >> n;
    for(int i = 0; i < n; i++) {
        filein >> a[i];
    }
    filein.close();
}

void write_file(const string& filename, int a[], int n) {
    ofstream fileout(filename);
    fileout << n << endl;
    for(int i = 0; i < n; i++) {
        fileout << a[i] << " ";
    }
    fileout.close();
}

int main() {
    int a[100]; // định nghĩa mảng tối đa 100 phần tử
    int n;
    read_file("input.txt", a, n);

    bubble_sort(a, n);

    write_file("output.txt", a, n);

    return 0;
}