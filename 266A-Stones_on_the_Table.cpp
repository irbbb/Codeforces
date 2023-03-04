#include <iostream>

int main() {
	int n, cnt = 0;

	std::cin >> n;

	char c, prev;
	std::cin >> prev;

	for (int i = 0; i < n - 1; i++) {
		std::cin >> c;
		if (prev == c) cnt++;
		prev = c;
	}

	std::cout << cnt;

	return 0;
}