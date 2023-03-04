#include <iostream>
#include <string>

int main() {
	int n;
	char c;
	int cnt = 0;

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> c;
		if (c == 'A') cnt++;
	}

	if (cnt > n - cnt) {
		std::cout << "Anton";
	}
	else if (cnt < n - cnt) {
		std::cout << "Danik";
	}
	else {
		std::cout << "Friendship";
	}

	return 0;
}