#include <iostream>
#include <string>

int main() {
	int n;
	std::string res;

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		if (i % 2) res += "I love ";
		else res += "I hate ";

		if (i == n - 1) res += "it";
		else res += "that ";
	}

	std::cout << res;

	return 0;
}