#include <iostream>

bool newYear(int n) {
	if (n < 0) {
		return false;
	}
	if (n == 0) {
		return true;
	}

	return n % 2020 == 0 || newYear(n - 2021);
}

int main() {
	int t, n;

	std::cin >> t;

	for (int i = 0; i < t; i++) {
		std::cin >> n;

		if (newYear(n)) std::cout << "YES";
		else std::cout << "NO";
		std::cout << std::endl;
	}
}