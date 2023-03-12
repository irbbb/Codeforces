#include <iostream>

void solve() {
	int n, k;
	std::cin >> n >> k;

	int b = 1, t = 50;

	bool isIdeal = false;

	for (int i = 0; i < n; i++) {
		int l, r;
		std::cin >> l >> r;

		if (k >= l && k <= r) {
			if (l > b) b = l;
			if (r < t) t = r;
			if (b == t && b == k) {
				isIdeal = true;
			}
		}
	}

	if (isIdeal) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}
	std::cout << std::endl;
	return;
}

int main() {
	int t;
	std::cin >> t;

	for (int i = 0; i < t; i++) solve();

	return 0;
}