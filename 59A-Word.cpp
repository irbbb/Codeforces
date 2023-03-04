#include <iostream>
#include <string>

int main() {

	std::string s;

	std::cin >> s;

	int l = 0, u = 0;
	for (auto& c : s) {
		if (c < 91) u++;
		else l++;
	}

	if (l >= u) {
		for (auto& c : s) {
			std::cout << (char)tolower(c);
		}
	}
	else
		for (auto& c : s) {
			std::cout << (char)toupper(c);
		}

	return 0;
}