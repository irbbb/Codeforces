#include <iostream>

int main() {
	int n;

	std::cin >> n;

	int a, b, cnt = 0, max = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> a >> b;
		cnt = b + cnt - a;
		if (cnt > max) {
			max = cnt;
		}
	}

	std::cout << max;

	return 0;
}