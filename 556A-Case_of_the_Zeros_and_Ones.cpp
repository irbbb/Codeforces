
#include <iostream>

int main() {
	int n, cnt = 0;
	std::cin >> n;

	char c;
	for (int i = 0; i < n; i++) {
		std::cin >> c;
		if (c == '0') cnt++;
	}

	std::cout << std::abs(n - cnt * 2);

}