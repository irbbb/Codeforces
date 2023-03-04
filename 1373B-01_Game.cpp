#include <iostream>
#include <string>
#include <algorithm>

void solve() {
	std::string s;
	std::cin >> s;

	int zeros = 0;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '0') zeros++;
	}

	int max_moves = std::min(zeros, (int)s.size() - zeros);

	if (max_moves % 2) std::cout << "DA";
	else std::cout << "NET";

	std::cout << std::endl;
}

int main() {
	int t;
	std::cin >> t;

	for (int i = 0; i < t; i++) solve();

	return 0;
}