#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int n, m;
	std::cin >> n >> m;

	std::vector<int> v(m, 0);

	for (int i = 0; i < m; i++) {
		std::cin >> v[i];
	}

	std::sort(v.begin(), v.end());

	int diff = v[n - 1] - v[0];

	for (int i = 1; i <= m - n; i++) {
		diff = std::min(diff, v[n - 1 + i] - v[i]);
	}

	std::cout << diff;

	return 0;
}