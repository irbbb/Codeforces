#include <iostream>

void solve() {
	int n;
	std::cin >> n;

	int minus_count = 0, n_zeros = 0;
	long long total = 0;

	for (int i = 0; i < n; i++) {
		int temp;
		std::cin >> temp;

		if (temp < 0) {
			minus_count++;
			total += -temp - 1;
		}
		else if (temp == 0) {
			n_zeros++;
		}
		else {
			total += temp - 1;
		}
	}
	if (minus_count % 2) {
		if (n_zeros) {
			total++;
			n_zeros--;
		}
		else {
			total += 2;

		}
	}

	total += n_zeros;

	std::cout << total;
}

int main() {
	int t;
	//std::cin >> t;
	t = 1;

	for (int i = 0; i < t; i++) {
		solve();
	}

	return 0;
}