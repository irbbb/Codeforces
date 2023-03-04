#include <iostream>
#include <string>

void solve() {
	int k;
	std::string s;
	const std::string n = "FBFFBFFBFBFFBFFBFBFFBFFB";

	std::cin >> k;
	std::cin >> s;

	bool isFB = false;

	for (int i = 0; i < 8 && !isFB; i++) {
		int j;
		for (j = 0; j < k; j++) {
			if (s[j] != n[(j + i) % 16]) {
				break;
			}
		}
		if (j == k) isFB = true;
	}

	if (isFB) {
		std::cout << "YES" << std::endl;
	}
	else std::cout << "NO" << std::endl;

}

int main() {
	int t;
	std::cin >> t;

	for (int i = 0; i < t; i++) solve();

