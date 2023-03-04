#include <iostream>
#include <string>
#include <set>

int main() {
	std::string s;
	std::set<char> char_set;

	std::cin >> s;

	s = std::to_string(std::stoi(s) + 1);

	const int ZERO = 48;

	int i = 0;
	while (i != 4) {
		if (char_set.find(s[i]) == char_set.end()) {
			char_set.insert(s[i]);
			i++;
		}
		else {
			i = 0;
			char_set.clear();
			s = std::to_string(std::stoi(s) + 1);
		}
	}

	std::cout << s;

	return 0;
}