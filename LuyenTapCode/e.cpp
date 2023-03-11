#include <bits/stdc++.h>
using namespace std; 
int main() {
	system("cls");
	int tuoi;
	do {
	cin >> tuoi;
	}while(tuoi < 0 || tuoi > 150);
	if(tuoi > 0 || tuoi <= 11)
		cout << "Thieu nhi";
	if(tuoi > 11 || tuoi <= 25)
		cout << "Thieu nien";
	if(tuoi > 25 || tuoi <= 50)
		cout << "Trung nien";
	if(tuoi > 50)
		cout << "Lao nien";
}