#include <iostream>

int main() {
	int n;

	std::cin >> n;

	double sum = 0, x;

	for (int i = 0; i < n; i++) {
		std::cin >> x;
		sum += x;
	}

	std::cout << (sum / n);

	return 0;

}