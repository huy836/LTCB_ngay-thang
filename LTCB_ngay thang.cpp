#include <iostream>
using namespace std;
int main() {
	int thang;
	cout << "nhap vao thang trong nam\n";
	cin >> thang;
		switch (thang) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout << "thang %d co 31 ngay\n", thang;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout << "thang %d co 30 ngay\n", thang;
			break;
		case 2:
			cout << "thang %d co 28 hoac 29 ngay\n";
			break;
		default:
			cout << "khong co thang %d", thang;
			break;


		}
	return 0;
}