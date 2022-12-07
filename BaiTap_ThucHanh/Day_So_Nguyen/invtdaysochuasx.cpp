// Cho một dãy gồm n số nguyên chưa sắp xếp và một số nguyên x. Hãy xem trong dãy có bao nhiêu phần tử có giá trị x
#include <iostream>
using namespace std;

int a[] = {4,3,4,6,4,9,4};
int n = sizeof(a)/sizeof(int);
int x = 4;
int dem = 0;

void TimX(int f, int e) {
	int k = (f+e)/2;
	if (a[k] == x) dem += 1;
	if (f <= k-1) TimX(f, k-1);
	if (k+1 <= e) TimX(k+1, e);
}

int main() {
	system("cls");
	TimX(0, n);
	cout << dem;
}