#include <iostream>

int main() {
	long long n, k;

	std::cin >> n >> k;

	if (k <= n / 2 + (n % 2)) {
		std::cout << 2 * k - 1;
	}
	else {
		std::cout << 2 * (k - n / 2 - (n % 2));
	}

	return 0;
}