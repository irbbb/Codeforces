#include <iostream>
#include <set>
#include <string>

int main() {
	std::set<char> set;
	std::string str;

	std::cin >> str;

	for (auto& c : str) {
		set.insert(c);
	}

	if (set.size() % 2) {
		std::cout << "IGNORE HIM!";
	}
	else {
		std::cout << "CHAT WITH HER!";
	}

	return 0;
}