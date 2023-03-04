#include <iostream>

int main() {
	int n, k, k_val;

	std::cin >> n >> k;

	int score;
	int cnt = 0;
	for (int i = 0; i < k; i++) {
		std::cin >> score;
		if (score > 0) cnt++;
	}

	k_val = score;

	for (int i = k; i < n; i++) {
		std::cin >> score;
		if (score < k_val) break;
		if (score > 0) cnt++;
	}

	std::cout << cnt;

	return 0;
}