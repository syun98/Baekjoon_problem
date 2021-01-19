#include <iostream>
#include <cmath>
using namespace std;

int n, half;
int res = 101;		//����� ����
int arr[21][21] = {};		//�Է��� ����
int start[11], link[11];	//�� ���� ������ ����
bool use[21];	//��� ������� �˸��� �迭

void divide(int cnt, int index) {
	if (cnt == half) {		//cnt�� ������ ���� ��
		int startSum = 0, linkSum = 0, startSize = 0, linkSize = 0;
		//sum���� �հ� �� �� ���, Size�� ?
		for (int i = 1; i <= n; i++) {
			if (use[i])		//����ϰ� �ִ� �����̶��
				start[startSize++] = i;		//start������ ���� �ڸ��� i�� ���� �Է�
			else
				link[linkSize++] = i;	//�������� link �������� ����
		}

		for (int i = 0; i < half; i++) {
			for (int j = 0; j < half; j++) {
				if (i == j)
					continue;		//0�� ����ִ� �밢�� ��ġ�� pass
				startSum += arr[start[i]][start[j]];
				linkSum += arr[link[i]][link[j]];	//�� ���ϱ�
			}
		}

		int diff = abs(startSum - linkSum);
		res = res > diff ? diff : res;	//���̸� ���Ͽ� ���� ���� ����
		return;
	}

	for (int i = index; i <= n; i++) {
		if (!use[i]) {		//������ ���� ����� ã����
			use[i] = true;	//����� ������ �˸���
			divide(cnt + 1, i + 1);	//cnt�� index�� �������Ѽ� ���
			use[i] = false;		//��� ������
		}
	}
}

int main() {
	cin >> n;
	half = n / 2;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr[i][j];
		}
	}

	use[1] = true;
	divide(1, 2);
	cout << res << endl;
}

/*https://lollolzkk.tistory.com/8*/