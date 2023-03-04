#include <iostream>
#include <vector>
#include <algorithm>

void solve() {
	int n;
	std::cin >> n;

	std::vector<int> v(n + 1);

	int max = 0, c;

	for (int i = 1; i < n + 1; i++) {
		std::cin >> v[i];
	}

	for (int i = 1; i < n + 1; i++) {
		c = 1;
		int x = v[i];

		while (x != -1) {
			x = v[x];
			c++;
		}

		max = std::max(c, max);
	}

	std::cout << max;
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