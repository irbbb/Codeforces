#include <iostream>

int main() {
	int t, n;

	std::cin >> t;

	for (int i = 0; i < t; i++) {
		std::cin >> n;

		int s = 3;

		while (n % s) {
			s = s * 2 + 1;
		}

		std::cout << n / s << std::endl;
	}

	return 0;
}