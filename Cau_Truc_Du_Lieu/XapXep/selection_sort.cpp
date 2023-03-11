#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp) {
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

void selectionSort(int arr[], int n) {
  int i, j, min_indx;
  for(int i = 0; i < n-1; i++) {
    min_indx = i;
    for(int j = i + 1; j < n; j++)
    if(arr[j] < arr[min_indx])
      min_indx = j;
    if(min_indx != i)
      swap(&arr[min_indx], &arr[i]);
  }
}

void printArray(int arr[], int size) {
  int i; 
  for(int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

int main() {
  system("cls");
  int arr[] = {12, 234, 68, -10, -20, -90, 100};
  int n = sizeof(arr) / sizeof(arr[0]);
  selectionSort(arr, n);
  cout << "\nDay da xap sep la: ";
  printArray(arr, n);
  return 0;
}