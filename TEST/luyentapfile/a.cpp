#include <iostream>
#include <fstream>
using namespace std;

void read_file(const string& filename, int a[], int& n) {
  ifstream filein(filename);
  filein >> n;
   for(int i = 0; i < n; i++) 
    filein >> a[i];    
  filein.close();
}

void write_file(const string& filename,int a[], int n) {
  ofstream fileout(filename);
  for(int i = 0; i < n; i++) fileout << a[i] << " ";
  fileout.close();
}

int main() {
  int a[100];
  int n;
  read_file("input.txt", a, n);
  write_file("output.txt", a, n);
 



  return 0;
}
