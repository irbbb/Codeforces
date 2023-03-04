#include <iostream>

int main() {
	int x = 0;
	for (int i = 0; i < 25 && !x; i++) {
		std::cin >> x;
		if (x == 1) std::cout << abs(2 - i / 5) + abs(2 - i % 5);
	}
}