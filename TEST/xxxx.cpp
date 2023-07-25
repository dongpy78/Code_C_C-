// #include <iostream>
// using namespace std;

// int dem_le(int *a, int n) {
//     return --n>=0?(!(a[n]&1))+dem_le(a,n):0;
// }

// int dem_chan(int *a, int n) {
//   return --n>=0 ? (!a[n]&0)+dem_chan(a, n):0;
// }

// int main() {
//   system("cls");
//   int n;
//   cin >> n;
//   int a[n];
//   for(int i = 1; i <= n; i++) cin >> a[i];
//   cout << dem_le(a, n) << " " << dem_chan(a, n) << endl;
// }

#include <iostream>
using namespace std;

int main() {
  int a[] = {3, 8, 1, 5, 6};
  int n = sizeof(a) / sizeof(a[0]);
  int x, dem = -1;
  cin >> x;
  for(int i = 0; i < n; i++) {
    if(a[i] == x) {
      dem = i;
      break;
    } 
  }

  cout << dem;
}