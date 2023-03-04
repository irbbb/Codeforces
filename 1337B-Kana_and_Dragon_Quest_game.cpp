#include <iostream>

bool fight(int x, int n, int m) {
	if (x <= m * 10) return true;


	while (n > 0 && x > 15) {
		x = x / 2 + 10;
		n--;
	}

	return x <= m * 10;
}

int main() {
	int t;
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		int x, n, m;

		std::cin >> x >> n >> m;

		if (fight(x, n, m)) std::cout << "YES";
		else std::cout << "NO";

		std::cout << std::endl;
	}

	return 0;
}