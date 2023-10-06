#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= 10; i++) {
		cout << i << " * " << n << " = " << i * n << endl;
	}
	cout << " " << endl;
	for (int i = 1; i <= 10; i++) {
		cout << i << " * " << 7 << " = " << i * 7 << endl;
	}
}