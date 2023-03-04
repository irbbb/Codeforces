#include <iostream>
#include <map>

int main() {
	int n, p;
	std::map<int, int> m;

	std::cin >> n;

	for (int i = 1; i < n + 1; i++) {
		std::cin >> p;

		m.insert(std::pair<int, int>(p, i));
	}

	for (auto& k : m) {
		std::cout << k.second << " ";
	}


	return 0;
}