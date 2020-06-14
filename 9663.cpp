#include <iostream>
using namespace std;

int n;
int res;
int board[15] = {};

bool chk(int row) {
	for (int i = 0; i < row; i++) {	//i�� 0~������ ���� �ٷ� �� �����
		//���� ���� �ְų� �밢���� �ִٸ�
		if (board[row] == board[i] || abs(row - i) == abs(board[row] - board[i]))
			return false;
	}
	return true;
}

void run(int row) {
	if (row == n) {
		res++;
		return;
	}

	//ù ��° �࿡ ���̴� ���� ��ġ�� i�� ����
	for (int i = 0; i < n; i++) {	//i�� ���� ��ġ
		board[row] = i;
		if (chk(row))		//chk�Ѱ� ���������
			run(row + 1);
		//��� ������
		board[row] = 0;
	}
}

int main(void) {
	cin >> n;
	run(0);
	cout << res << endl;
}