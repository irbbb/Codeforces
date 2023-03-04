#include <iostream>

int main() {
	int n, s = 0;

	std::cin >> n;

	for (int i = 5; i >= 1; i--) {
		if (n / i > 0) {
			s += n / i;
			n -= n / i * i;
		}
		if (n == 0) {
			std::cout << s;
			break;
		}
	}


	return 0;
}