#include <iostream>
using namespace std;
#include <fstream>

void doc_mang(const char fname[], int a[], int &n) {
  ifstream file(fname);
  if(!file.is_open()) cout << "Khong mo duoc file: " << endl;
  else {
    file >> n;
    for(int i = 0; i < n; i++) file >> a[i];
    file.close();
  } 
}

void in_mang(int a[], int n, int start, int end) {
  for(int i = start; i <= end; i++) cout << a[i] << " ";
}

int tong_chan(int a[], int n) {
  if(n <= 0) return 0;
  else {
    if(a[n-1] % 2 == 0) return a[n-1] + tong_chan(a, n-1);
    else return tong_chan(a, n-1);
  }
}

void mang_con(int a[], int n, int max_start, int max_end) {
  int max_length = 0, start = 0, end = 0;
  max_start = 0, max_end = 0;
  int i = 0;
  
  while(i < n-1) {
    if(a[i] > a[i+1]) i++;
    else {
      start = i;
      end = start;

      while(a[end] < a[end+1] && end < n-1) end++;

      if(end - start > max_length) {
        max_start = start;
        max_end = end;
        max_length = end - start;
      }
      i = end;
    }
  }
}