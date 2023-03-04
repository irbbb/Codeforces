#include <iostream>

bool isHard(int& n) {
	int r;

	for (int i = 0; i < n; i++) {
		std::cin >> r;
		if (r == 1) {
			return true;
		}
	}

	return false;
}

int main() {
	int n;
	std::cin >> n;

	if (isHard(n)) {
		std::cout << "HARD";
	}
	else {
		std::cout << "EASY";
	}

	return 0;
}