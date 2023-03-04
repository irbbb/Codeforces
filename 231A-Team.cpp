#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int a, b, c, cnt = 0;
	for (unsigned int i = 0; i < n; i++) {
		std::cin >> a >> b >> c;

		if (a + b + c > 1) cnt++;
	}
	std::cout << cnt;

	return 0;
}