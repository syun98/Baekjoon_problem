//blog : https://codesyun.tistory.com/42
#include <vector>
long long sum(std::vector<int> &a) {
	long long ans = 0;
	for (int i = 0; i < a.size(); i++) {
		ans += a.at(i);
	}
	return ans;
}