#include <iostream>
using namespace std;

void Input_Set(int& na, int& nb, int* a, int *b) {
    do {
        cout << "Nhap kich thuoc tap hop A: ";
        cin >> na;
    } while (na < 0);
    
    cout << "Nhap cac phan tu cua tap hop A: ";
    for (int i = 0; i < na; i++) {
        cin >> a[i];
    }

 do {
        cout << "Nhap kich thuoc tap hop B: ";
        cin >> nb;
    } while (nb < 0);
    
    cout << "Nhap cac phan tu cua tap hop B: ";
    for (int i = 0; i < nb; i++) {
        cin >> b[i];
    }
}

bool IsElementIn(int element, int* set, int size) {
    for (int i = 0; i < size; i++) {
        if (set[i] == element) {
            return true;
        }
    }
    return false;
}

 main() {
	system("cls");
    int na, nb;
    int a[50], b[50];

    Input_Set(na, nb, a, b);

    // Kiểm tra từng phần tử trong tập hợp A xem có nm trong tập hợp B không
    bool isEqual = true;
    for (int i = 0; i < na; i++) {
        if (!IsElementIn(a[i], b, nb)) {
            isEqual = false;
            break;       }
    }

 if (isEqual) {
        cout << "Cacan tu trong tap hop A cung co trong tap hop B." << endl;
    } else {
        cout << "Cac phan trong tap hop A khong co trong tap hop B." << endl;
    }

    return 0;
}
