//blog : https://codesyun.tistory.com/33
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	int arr[1000000] = {};
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	cout << arr[0] << " " << arr[n - 1] << '\n';
}