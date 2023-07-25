#include <iostream>
#include <fstream>
using namespace std;

ifstream file_in ("input.txt");
ofstream file_out ("output.txt");

int main() {
  system("cls");
  int n;
  int a[100];
  file_in >> n;
  
  for(int i = 0; i < n; i++) file_in >> a[i];

  for(int i = 0; i < n; i++) file_out << a[i] << " ";
  return 0;
}