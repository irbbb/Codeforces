#include <iostream>

void solve() {
	int n;
	std::cin >> n;

	if (n < 10) std::cout << n;
	else if (n > 45) std::cout << -1;
	else {
		int sum = 0, res = 0, cif = 0;
		while (sum < n) {
			for (int i = 9 - cif; i > 0; i--) {
				if (sum + i <= n) {
					res += pow(10, cif++) * i;
					sum += i;
					if (sum == n) std::cout << res;
					break;
				}

			}
		}
	}
	std::cout << std::endl;
	return;
}

int main() {
	int t;
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		solve();
	}

	return 0;
}