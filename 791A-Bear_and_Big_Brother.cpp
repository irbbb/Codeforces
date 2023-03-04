#include <iostream>

int main() {
	int a, b, i = 0;

	std::cin >> a >> b;

	while (a <= b) {
		a = a * 3;
		b = b * 2;
		i++;
	}

	std::cout << i;

	return 0;
}