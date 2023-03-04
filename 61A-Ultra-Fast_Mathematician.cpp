#include <iostream>
#include <string>

int main() {
	std::string a, b;

	std::cin >> a;
	std::cin >> b;

	for (int i = 0; i < a.size(); i++) {
		if (a[i] ^ b[i]) a[i] = '1';
		else a[i] = '0';
	}

	std::cout << a;

	return 0;
}