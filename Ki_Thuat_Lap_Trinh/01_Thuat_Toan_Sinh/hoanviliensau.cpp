#include <iostream>
#include <algorithm>
using namespace std;

// Hàm để tìm hoán vị liền sau
void findNextPermutation(int arr[], int n) {
  // Tìm phần tử đầu tiên từ phải qua trái thoả điều kiện a[j] < a[j+1]
  int i = n - 2;
  while (i >= 0 && arr[i] >= arr[i + 1])
    i--;

  if (i >= 0) {
    // Tìm số nhỏ nhất trong các số bên phải của arr[i] mà lại lớn hơn arr[i]
    int j = n - 1;
    while (j > i && arr[j] <= arr[i])
      j--;

    // Hoán đổi arr[i] và arr[j]
    swap(arr[i], arr[j]);
  }

  // Đảo ngược các số từ vị trí i+1 đến cuối để có hoán vị liền sau nhỏ nhất
  reverse(arr + i + 1, arr + n);
}

int main() {
  system("cls");
  int arr[] = {4, 7, 3, 6, 5, 2, 1};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Hoan vi ban dau: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i];
  }

  findNextPermutation(arr, n);

  cout << "\nHoan vi lien sau: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i];
  }

  return 0;
}