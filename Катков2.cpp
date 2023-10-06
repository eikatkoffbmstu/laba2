#include <iostream>
using namespace std;
int main() {
	using byte = unsigned char;
	pair<byte, byte>position1;
	pair<byte, byte>position2;
	int x2, y2, x1, y1;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	position1.first = x1;
	position1.second = y1;
	position2.first = x2;
	position2.second = y2;

	if (x1 > 8 || x1 < 1 || x2 > 8 || x2 < 1 || y1 > 8 || y1 < 1 || y2 > 8 || y2 < 1 || (x1!=x2 && y1==y2) || (y1!=y2 && x1==x2)){
		cout << "ERROR 404";
	}
	else {
		if (position1.first == position2.first || position1.second == position2.second){
			cout << "Rook wons" << endl;
		}
		else {
			cout << "Rook looses" << endl;
		}
		if (abs(position1.first - position2.first) <= 1 && abs(position1.second - position2.second) <= 1) {
			cout << "King wons" << endl;
		}
		else {
			cout << "King looses" << endl;
		}
		if (position2.second - position1.second == 1 && position1.first == position2.first) {
			cout << "Pawn can get point w/out damage" << endl;
		}
		else if (abs(position2.first - position1.first) == 1 && position2.second - position1.second == 1) {
			cout << "Pawn can get point w/ damage" << endl;
		}
		else {
			cout << "Pawn looses" << endl;
		}

		if (abs(position1.first - position2.first) == abs(position1.second - position2.second)) {
			cout << "Bishop wons" << endl;

		}
		else {
			cout << "Bishop looses" << endl;
		}
		if ((position2.first == position1.first or position1.second == position2.second) or (abs(position2.first - position1.first) == abs(position2.second - position1.second))) {
			cout << "Queen wons" << endl;
		}
		else {
			cout << "Queen looses" << endl;

		}
	}
}
