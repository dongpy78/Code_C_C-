/*
Hãy viết chương trình in ra màn hình kết quả của phép giao hai tập hợp A, B. Các phần tử của
hai tập hợp A, B được nhập từ bàn phím.
*/

#include <iostream>

using namespace std;

// Hàm để in ra màn hình các phần tử của mảng
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  system("cls");
  // Nhập số lượng phần tử trong tập hợp A từ bàn phím
  int sizeA;
  cout << "Nhap so luong phan tu trong tap hop A: ";
  cin >> sizeA;

  // Khởi tạo mảng động cho tập hợp A
  int * setA = new int[sizeA];

  // Nhập các phần tử của tập hợp A từ bàn phím
  cout << "Nhap cac phan tu cua tap hop A: ";
  for (int i = 0; i < sizeA; i++) {
    cin >> setA[i];
  }

  // Nhập số lượng phần tử trong tập hợp B từ bàn phím
  int sizeB;
  cout << "Nhap so luong phan tu trong tap hop B: ";
  cin >> sizeB;

  // Khởi tạo mảng động cho tập hợp B
  int * setB = new int[sizeB];

  // Nhập các phần tử của tập hợp B từ bàn phím
  cout << "Nhap cac phan tu cua tap hop B: ";
  for (int i = 0; i < sizeB; i++) {
    cin >> setB[i];
  }

  // Mảng động để lưu trữ kết quả phép giao
  int * intersection = new int[sizeA < sizeB ? sizeA : sizeB]; // Độ dài tối đa của kết quả là min(sizeA, sizeB)

  // Thực hiện phép giao hai tập hợp
  int count = 0;
  for (int i = 0; i < sizeA; i++) {
    for (int j = 0; j < sizeB; j++) {
      if (setA[i] == setB[j]) {
        intersection[count++] = setA[i];
        break;
      }
    }
  }

  // In ra màn hình kết quả phép giao
  cout << "Ket qua cua phep giao hai tap hop A va B la: ";
  printArray(intersection, count);

  // Giải phóng bộ nhớ đã cấp phát cho mảng động
  delete[] setA;
  delete[] setB;
  delete[] intersection;

  return 0;
}