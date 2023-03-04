#include <iostream>
#include <algorithm>

int main() {
	int n;
	std::cin >> n;

	int max = 1, curr = 1, a, b;

	std::cin >> a;

	for (int i = 0; i < n - 1; i++) {
		std::cin >> b;
		if (a <= b) curr++;
		else {
			max = std::max(curr, max);
			curr = 1;
		}
		a = b;
	}

	std::cout << std::max(curr, max);

	return 0;
}