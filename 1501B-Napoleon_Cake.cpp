#include <iostream>
#include <algorithm>
#include <vector>

void solve() {
	int n;
	std::cin >> n;

	std::vector<int> v(n);

	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}

	for (int i = n - 2; i >= 0; i--) {
		v[i] = std::max(v[i], std::max(0, v[i + 1] - 1));
	}

	for (auto& i : v) {
		std::cout << (i > 0 ? 1 : 0) << " ";
	}

	std::cout << std::endl;
}

int main() {
	int t;
	std::cin >> t;

	for (int i = 0; i < t; i++) solve();

	return 0;
}