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
  int a[100], n;
  ifstream filein;
  filein.open("INPUT.txt");
  filein >> n;
  for(int i = 0; i < n; i++)
    filein >> a[i];
  ofstream fileout;
  fileout.open("KETQUA.txt");
  for(int i = 0; i < n; i++) 
    if(nt(a[i])) 
      fileout << "   " << a[i];
  filein.close();
  fileout.close();
}