#include <iostream>

void solve() {
	int n;
	std::cin >> n;

	int max_digits = n / 2;

	if (n % 2) std::cout << "7";
	else std::cout << "1";

	for (int i = 0; i < max_digits - 1; i++) std::cout << "1";

	std::cout << std::endl;

}

int main() {
	int t;
	std::cin >> t;
	//t = 1;

	for (int i = 0; i < t; i++) {
		solve();
	}

	return 0;
}