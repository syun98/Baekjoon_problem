#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	//2442������ i�� �Ųٷ�
	for (int i = n - 1; i >= 0; i--) {
		for (int j = 0; j < (n - 1); j++) {
			if (j < (n - 1 - i))
				cout << ' ';
			else
				cout << '*';
		}
		for (int j = 0; j < i + 1; j++)
			cout << '*';
		cout << endl;
	}
}