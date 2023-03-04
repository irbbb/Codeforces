#include <iostream>

int main() {
	int w, k, n;

	std::cin >> k >> w >> n;

	// k = 1 -> 1, 2, 4, 8 
	// 15
	// k = 2 -> 2, 4, 8, 16
	// 30
	// k = 3 -> 3, 6, 12, 24


	int res = k * n * (n + 1) / 2 - w;

	if (res < 0) std::cout << 0;
	else std::cout << res;

	return 0;
}