#include <iostream>
#include <algorithm>

int main() {
	int n;

	std::cin >> n;

	if (n >= 0) std::cout << n;
	else {
		if (n / 10 > n / 100 * 10 + n % 10) {
			std::cout << n / 10;
		}
		else {
			std::cout << n / 100 * 10 + n % 10;
		}
	}

	return 0;

}