#include <iostream>

int main() {
	int n, h;

	std::cin >> n >> h;

	int x, cnt = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> x;
		if (x > h) cnt += 2;
		else cnt++;
	}

	std::cout << cnt;

	return 0;
}