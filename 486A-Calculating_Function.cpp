#include <iostream>

int main() {
	long long n;

	std::cin >> n;

	if (n % 2) std::cout << -(n / 2 + 1);
	else std::cout << n / 2;

	return 0;
}