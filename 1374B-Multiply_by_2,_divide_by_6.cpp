#include <iostream>

int minMoves(int n) {
	int cnt = 0;
	while (n > 1) {
		if (n % 6 == 0) {
			n /= 6;
		}
		else if (n % 3 == 0) {
			n *= 2;
		}
		else {
			return -1;
		}

		cnt++;
	}
	return cnt;
}

int main() {
	int t;
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		int n;
		std::cin >> n;

		std::cout << minMoves(n) << std::endl;
	}
}