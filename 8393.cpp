//blog : https://codesyun.tistory.com/21
#include <iostream>
using namespace std;

int main() {
	int n;
	int result = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		result += i;
	}
	cout << result << endl;
}