#include <iostream>

using namespace std;

int main() {
	int a, b, v;
	cin >> a >> b >> v;
	int count;

	count = (v - b - 1) / (a - b) + 1;
	cout << count << endl;
}