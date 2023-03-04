#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector<int> v;
	int number;

	std::cin >> number;
	v.push_back(number);
	char c;
	while (std::cin >> c && c == '+') {
		std::cin >> number;
		v.push_back(number);
	}

	std::sort(v.begin(), v.end());

	for (int i = 0; i < v.size() - 1; i++) {
		std::cout << v[i] << "+";
	}

	std::cout << v[v.size() - 1];

}