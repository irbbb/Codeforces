#include <iostream>
#include <string>

int main() {
	std::string s, r;

	std::cin >> s;
	std::cin >> r;
	int i;
	for (i = 0; i < s.size() && s[i] == r[s.size() - 1 - i]; i++) {}

	if (i != s.size()) {
		std::cout << "NO";
	}
	else {
		std::cout << "YES";
	}

	return 0;
}