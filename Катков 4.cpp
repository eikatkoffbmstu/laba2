#include <iostream>
using namespace std;
int main() {
	int x, y, z;
	cin >> x >> y >> z;
	if (x % 2 != 0 && y % 2 != 0) {
		cout << "condition1 is true" << endl;
	}
	else {
		cout << "condition1 is false" << endl;
	}
	if (x < 20 && y >= 20 || x >= 20 && y < 20) {
		cout << "condition2 is true" << endl;
	}
	else {
		cout << "condition2 is false" << endl;
	}
	if (x == 0 || y == 0) {
		cout << "condition3 is true" << endl;
	}
	else {
		cout << "condition3 is false" << endl;
	}
	if (abs(x) != x && abs(y) != y && abs(z) != z) {
		cout << "condition4 is true" << endl;
	}
	else {
		cout << "condition4 is false" << endl;
	}
	if ((x % 5 == 0 && y % 5 != 0 && z % 5 != 0) || (x % 5 != 0 && y % 5 == 0 && z % 5 != 0) || (x % 5 != 0 && y % 5 != 0 && z % 5 == 0)) {
		cout << "condition5 is true" << endl;
	}
	else {
		cout << "condition5 is false" << endl;
	}
	if (x > 100 || y > 100 || z > 100) {
		cout << "condition6 is true" << endl;
	}
	else {
		cout << "condition6 is false" << endl;
	}
}