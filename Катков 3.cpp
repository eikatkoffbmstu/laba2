#include <iostream>
using namespace std;
int main() {
	int i, j = 8;
	for (i = 9; i <= 15; ++i) {
		j *= i;
	}
	int a, b, c, l, x;
	cin >> a;
	cin >> b;
	for (c = a; c <= 20; ++c) {
		c *= a;
	}
	for (l = 1; l <= b; ++l) {
		l *= b;
	}
	for (x = a; x <= b; ++x) {
		x *= b;
	}

	cout << j << " " << c << " " << l << " " << x << " " << endl;