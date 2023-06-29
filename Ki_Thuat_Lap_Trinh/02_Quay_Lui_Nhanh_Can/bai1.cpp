/*
Cho dãy số A[] gồm n số nguyên dương. Tam giác đặc biệt của dãy số A[] là tam giác được
tạo ra bởi n mảng, trong đó hàng thứ 1 là dãy số A[], hàng i là tổng hai phần tử liên tiếp của
hàng i-1 (2<=i<=n). Ví dụ A[] = {1,2,3,4,5}, khi đó tam giác được tạo nên như dưới đây
[1,2,3,4,5]
[3,5,7,9]
[8,12,16]
[20,28]
[48]
Input
- Dòng đầu tiên đưa vào số lượng bộ test T
- Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ
nhất đưa vào N là số lượng phần tử của dãy số A[]; dòng tiếp theo đưa vào N số của mảng A[].
- T, N, A[i] thỏa mãn ràng buộc: 1<=T<=100; 1<=N; A[i]<=10;
Output: đưa ra tam giác tổng của mỗi test theo từng dòng. Mỗi dòng của tam giác tổng
được bao bởi ký tự [,].
Input             Output
1                 [1,2,3,4,5]
5                 [3,5,7,9]
1 2 3 4 5         [8,12,16]
                  [20,28]
                  [48]
*/

#include <iostream>
using namespace std;

void Solve() {
  int n;
  cin >> n;
  int a[n+5][n+5];
  for(int j = 1; j <= n; j++)
    cin >> a[1][j];
  
  int cot = n - 1;
  for(int i = 2; i <= n; i++) {
    for(int j = 1; j <= cot; j++)
      a[i][j] = a[i-1][j] + a[i-1][j+1];
    cot--;
  }
  cot = n;
  for(int i = 1; i <= n; i++) {
    cout << '[';
    for(int j = 1; j < cot; j++)
      cout << a[i][j] << ' ';
    cout << a[i][cot] << ']';
    cot--;
    cout << endl;
  }
}

int main() {
  system("cls");
  int t;
  cin >> t;
  while(t--) {
    Solve();
  }
}


/*
1
5
1 2 3 4 5
*/