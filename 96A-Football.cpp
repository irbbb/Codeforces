#include <iostream>
#include <string>

int main() {
	std::string s;

	std::cin >> s;

	int max = 1;

	for (int i = 1; i < s.size() && max < 7; i++) {
		if (s[i - 1] == s[i]) max++;
		else max = 1;
	}

	if (max == 7) std::cout << "YES";
	else std::cout << "NO";

	return 0;
}