#include <iostream>

bool game(int n) {
	char c;
	if (!(n % 2)) {
		std::cin >> c;
	}

	for (int i = !(n % 2); i < n; i+=2) {
		std::cin >> c;
		if (n % 2 && c % 2) { std::cin.ignore(n, '\n'); return true; }
		if (!(n % 2) && !(c % 2)) { std::cin.ignore(n, '\n'); return false; }
		if (i < n - 1) std::cin >> c;
	}
	return !(n % 2);
}

void solve() {
	int n;
	std::cin >> n;

	if (game(n)) std::cout << 1;
	else std::cout << 2;
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