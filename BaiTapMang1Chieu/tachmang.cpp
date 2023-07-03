#include <iostream>
using namespace std;

int main() {
    system("cls");
    int size, size_odd = 0, size_even = 0;
    cin >> size;

    // Nhập dữ liệu cho mảng ban đầu và tách mảng!
    int array[size], array_odd[size], array_even[size];
    for (int i = 0; i < size; i++) {
        cin >> array[i];
        array[i] % 2 == 0 ? array_even[size_even++] = array[i] : array_odd[size_odd++] = array[i];
    }

    // Hiển thị ra lại
    for (int i = 0; i < size_odd; i++) {
        cout << array_odd[i] << ' ';
    }
    cout << endl;
    for (int i = 0; i < size_even; i++) {
        cout << array_even[i] << ' ';
    }
}