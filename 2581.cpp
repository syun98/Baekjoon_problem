//blog : https://codesyun.tistory.com/64
#include <iostream>
using namespace std;

int main() {
	int M, N;
	int sum = 0, min = -1;
	int cnt = 0;
	cin >> M >> N;

	for (int i = M; i <= N; i++) {
		for (int div = 1; div <= i; div++) {
			if (i%div == 0)
				cnt++;
		}
		if (cnt == 2) {		//i�� �Ҽ��� ��
			if (min == -1)		//����� �Ҽ��� �ּڰ��� ���� ��
				min = i;
			sum += i;
		}
		cnt = 0;
	}
	if (min == -1)
		cout << -1 << '\n';
	else
		cout << sum << '\n' << min << '\n';
}