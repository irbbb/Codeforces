#include <iostream>
#include <vector>
#include <algorithm>

void prob(const std::vector<long long>& v) {
	int a, b;
	std::cin >> a >> b;

	int start = v.size() - 1 - a;

	std::cout << v[start + b] - v[start] << std::endl;
}

void solve() {
	int n, q;
	std::cin >> n >> q;
	std::vector<int> v(n);
	std::vector<long long> free(n + 1);

	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}

	std::sort(v.begin(), v.end());

	for (int i = 1; i <= n; i++) {
		free[i] = free[i - 1] + v[i - 1];
	}

	for (int i = 0; i < q; i++) {
		prob(free);
	}
}

int main() {
	int t;
	//std::cin >> t;
	t = 1;

	for (int i = 0; i < t; i++) {
		solve();
	}

	return 0;
}