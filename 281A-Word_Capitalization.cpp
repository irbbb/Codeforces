#include <iostream>

int main() {
	char c;

	std::cin >> c;
	std::cout << (char)toupper(c);

	while (std::cin >> c) {
		std::cout << c;
	}
}
