// Cho một dãy số nguyên khác nhau đã sắp xếp và một số nguyên. In ra vị trí của x, nếu không có thì in ra -1
#include <iostream>
using namespace std;

int a[] = {1,2,3,4,5,7,8};
int n = sizeof(a)/sizeof(int);
int x = 7;

int ViTriX(int f, int e) {
	if (x < a[0] || x > a[n-1]) return -1;
	if (x == a[f]) return f;
	if (x == a[e]) return e;

	int m = (f+e)/2;
	if (x == a[m]) return m;
	else if (x > a[m]) {
		if (x < a[m+1]) return -1;
		return ViTriX(m+1, e);
	}
	else return ViTriX(f, m-1);
}

int main() {
	system("cls");
	cout << ViTriX(0, n-1);
}