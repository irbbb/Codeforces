#include <iostream>

int main() {
	long long n;
	std::cin >> n;

	int digits = 0;

	while (n > 0) {
		if (n % 10 == 7 || n % 10 == 4) digits++;
		n /= 10;
	}

	if (digits != 7 && digits != 4) std::cout << "NO";
	else std::cout << "YES";

	return 0;
}