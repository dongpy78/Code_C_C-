#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

bool nt(int n) {
  for(int i = 2; i <= sqrt(n); i++) 
    if(n % i == 0) return false;
  return n > 1;
}

int main() {
  int a[50], n, i = 0, dem = 0;
  ifstream filein;
  filein.open("INPUT.txt");
  while(!filein.eof()) {
    filein >> a[i];
    i++;
    dem++;
  }

  ofstream fileout;
  fileout.open("KETQUA.txt");
  for(int i = 0; i < dem; i++) 
    if(nt(a[i])) 
      fileout << "   " << a[i];

}