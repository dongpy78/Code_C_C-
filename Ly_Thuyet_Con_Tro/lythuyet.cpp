#include <iostream>
using namespace std;

int main() {
  system("cls");
  int a = 100;
  int *ptr;
  ptr = &a;
  cout << "Dia chi cua bien a: " << &a << endl;
  cout << "Gia tri cua con tro ptr: " << ptr << endl;
  cout << "Gia tri cua bien ma con tro ptr dang quan ly: " << *ptr << endl; 

  *ptr = 500;
  cout << "Gia tri cua bien a la: " << a;
  return 0;
}