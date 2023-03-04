#include <iostream>


void solve() {
	int n;
	std::cin >> n;

	while (n > 0) {
		if (n % 1000 == 144) { n -= 144; n /= 1000; }
		else if (n % 100 == 14) { n -= 14; n /= 100; }
		else if (n % 10 == 1) { n--; n /= 10; }
		else {
			std::cout << "NO";
			return;
		}
	}
	std::cout << "YES";

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