#include <iostream>

using namespace std;

void sort(int a[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++)
      if (a[i] > a[j]) swap(a[i], a[j]);
  }
}

bool kiem_tra_mang(int arrayA[], int sizeA, int arrayB[], int sizeB) {
  if (sizeA != sizeB)
    return false;

  sort(arrayA, sizeA);
  sort(arrayB, sizeB);

  for(int i = 0; i < sizeA; i++) 
    if(arrayA[i] != arrayB[i]) return false;

  return true;
}

int main() {
  system("cls");

  int arrayA[] = {1, 2, 3};
  int sizeA = sizeof(arrayA) / sizeof(arrayA[0]);

  int arrayB[] = {1, 2, 3};
  int sizeB = sizeof(arrayB) / sizeof(arrayB[0]);

  // sort(arrayA, sizeA);
  // sort(arrayB, sizeB);

  bool result = kiem_tra_mang(arrayA, sizeA, arrayB, sizeB);

  if (result) {
    cout << "Hai mang co phan tu giong nhau" << endl;
  } else {
    cout << "Hai mang khong co phan tu giong nhau" << endl;
  }

}