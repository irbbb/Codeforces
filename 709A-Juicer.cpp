#include <iostream>

void solve() {
	int n, b, d;
	std::cin >> n >> b >> d;

	int sum = 0, c = 0;

	for (int i = 0; i < n; i++) {
		int temp;
		std::cin >> temp;
		if (temp <= b) {
			sum += temp;
		}
		if (sum > d) {
			sum = 0;
			c++;
		}
	}

	std::cout << c;
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