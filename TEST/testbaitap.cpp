#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main() {
  system("cls");
  int n;
  cin >> n;
  int a[n];
  // Nhap mang
 
  for(int i = 0; i < n; i++) {
    int check = 1;
    for(int j = 0; j < i; j++) {
      if(a[i] == a[j]) {
        check = 0; 
        break;
      } 
    }
    if(check) {
      int dem = 1;
      for(int j = i + 1; j < n; j++)
        if(a[i] == a[j]) dem++;
    }
  }


  return 0;
}