//blog : https://codesyun.tistory.com/56
#include <iostream>
using namespace std;

int main() {
	int N;
	int div_five, div_three;	//5, 3���� ����� Ƚ���� ������ ����
	cin >> N;

	div_five = N / 5;
	while (1) {
		if (div_five < 0) {
			cout << -1 << endl;
			return 0;
		}
		if ((N - (5 * div_five)) % 3 == 0) {
			div_three = (N - (5 * div_five)) / 3;
			break;
		}
		div_five--;
	}
	cout << div_five + div_three << endl;
	return 0;
}