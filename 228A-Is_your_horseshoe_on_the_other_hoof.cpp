#include <iostream>
#include <set>

int main() {
	std::set<int> s;

	int a;

	for (int i = 0; i < 4; i++) {
		std::cin >> a;

		s.insert(a);
	}

	std::cout << 4 - s.size();

	return 0;
}