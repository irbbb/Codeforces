#include <iostream>

int main() {
	int t; long long n;
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		std::cin >> n;
		while (n > 2) {
			if (n & 1) {
				std::cout << "YES" << std::endl;
				break;
			}
			n /= 2;
		}
		if (!(n & 1)) {
			std::cout << "NO" << std::endl;
		}
	}
}