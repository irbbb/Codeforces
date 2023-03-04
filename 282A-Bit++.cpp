#include <iostream>
#include <string>

int main() {
	int n, x = 0;
	std::cin >> n;

	std::string line;

	for (int i = 0; i < n; i++) {
		std::cin >> line;
		if (line == "++X" || line == "X++") {
			x++;
		}
		else {
			x--;
		}
	}

	std::cout << x;
}