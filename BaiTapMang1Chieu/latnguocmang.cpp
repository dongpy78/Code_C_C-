/*
Cho mảng số nguyên A[] gồm N phần tử, hãy lật ngược màng A[] và in ra kết quả
INPUT
5
69 94 77 28 81
OUTPUT
81 28 77 94 69
*/

#include <iostream>
using namespace std;
#define ll long long

int main() {
  system("cls");
  int n; 
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];

  int l = 0, r = n-1;

  while(l <= r) {
    int tam = a[l];
    a[l] = a[r];
    a[r] = tam;
    l++; r--;
  }

  for(int i = 0; i < n; i++) cout << a[i] << " "; 

  return 0;
}