#include <iostream>
#define PI 3.1415926535897932
using namespace std;

int main() {
	double r;
	cin >> r;

	cout << fixed;
	cout.precision(6);

	cout << r * r*PI << endl << r * r * 2 << endl;
}