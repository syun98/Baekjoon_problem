#include <iostream>
#define MAX 9
using namespace std;

int n, m;
int arr[MAX] = {};
int chk[MAX] = {};		//���� ������ ����

void dfs(int cnt) {
	if (cnt == m) {		//m�� �ݺ��ϰ� m���ڰ� �ȴٸ� �ش� �迭 ���
		for (int i = 0; i < m; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; i++) {	//���ڸ� 1���� �˻�
		if (!chk[i]) {		//���� ȣ��� �Լ����� ���ƾ��ٸ� pass
			chk[i] = true;	//����ߴٰ� �ٲٰ�
			arr[cnt] = i;	//cnt��°�� �����ص� ��
			dfs(cnt + 1);	//���� �迭 ���ڸ� �����ϱ� ���� ���
			chk[i] = false;	//�ش� ������ ��� ����
		}
	}
}

int main(void) {
	cin >> n >> m;
	dfs(0);
}