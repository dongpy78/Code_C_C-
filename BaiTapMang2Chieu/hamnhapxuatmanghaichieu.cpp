#include <iostream>
using namespace std;

void nhap(int a[][500], int n, int m) {
  for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++) 
      cin >> a[i][j];    
}

void in(int a[][500], int n, int m) {
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) 
      cout << a[i][j] << " ";
    cout << endl;
  }
}

int main() {
  system("cls");
  int n, m, a[500][500];
  cin >> n >> m;
  nhap(a, n, m);
  in(a, n, m);
  return 0;
}