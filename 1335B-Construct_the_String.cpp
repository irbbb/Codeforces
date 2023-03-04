#include <iostream>
#include <string>


int main() {
	int t;

	std::cin >> t;

	for (int i = 0; i < t; i++) {
		int n, a, b;
		std::cin >> n >> a >> b;

		std::string s;

		char c = 'a';
		for (int j = 0; j < b; j++) {
			s += c + j;
		}

		for (int j = 0; j < n; j++) {
			std::cout << s[j % b];
		}
		std::cout << std::endl;
	}
}