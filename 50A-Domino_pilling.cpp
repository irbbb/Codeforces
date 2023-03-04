#include <iostream>

int main() {
	int n, m;

	std::cin >> n >> m;

	std::cout << m * (n / 2) + m * (n % 2) / 2 << std::endl;

	return 0;
}