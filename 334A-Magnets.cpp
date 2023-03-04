#include <iostream>

int main() {
	int n, a, b, cnt = 1;

	std::cin >> n;
	std::cin >> a;

	for (int i = 0; i < n - 1; i++) {
		std::cin >> b;
		if (a != b) cnt++;
		a = b;
	}

	std::cout << cnt;

	return 0;
}