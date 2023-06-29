/*
Cho xâu nhị phân X[], nhiệm vụ của bạn là hãy đưa ra xâu nhị phân tiếp theo của X[]. 
Ví dụ X[] = "010101" thì xâu nhị phân tiếp theo của X[] là "010110"
Input:
- Dòng đầu tiên đưa vào số lượng test T
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ là một xâu nhị phân X.
- T, X[] thỏa mãn ràng buộc 1 <= T <= 100; 1 <= length(X) <= 10^3
Input       Output
2           010110
010101      000000
111111
*/

#include <iostream>
using namespace std;
void Solve() {
  string s;
  cin >> s;
  // s.size() -> 0; s[i] == '0' -> s[i] -> '1', s[j] = 0 (i < j < s.size())
  int i = s.size() - 1;
  while(s[i] == '1' && i >= 0) i -= 1;
  if(i < 0) {
    for(int i = 0; i < s.size(); i++) 
      cout << 0;
    cout << endl;
  } else {
    s[i] = '1';
    for(int j = i+1; j < s.size(); j++)
      s[j] = '0';
    cout << s << endl;
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