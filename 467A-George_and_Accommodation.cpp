#include <iostream>

int main() {
	int n;

	std::cin >> n;

	int p, q, cnt = 0;

	for (int i = 0; i < n; i++) {
		std::cin >> p >> q;
		if (q - p > 1) cnt++;
	}

	std::cout << cnt;

	return 0;
}
