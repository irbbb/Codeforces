#include <iostream>

bool existAP(int& a, int& b, int& c) {
	int d = b - a;
	if (d + b > 0 && (d + b) % c == 0) return true;
	d = b - c;
	if (d + b > 0 && (d + b) % a == 0) return true;
	d = (c - a);
	if (d % 2 != 0) return false;
	d /= 2;
	if (c - d != a + d) return false;
	if (c - d > 0 && (c - d) % b == 0) return true;


	return false;
}

int main() {
	int t;
	std::cin >> t;

	int a, b, c;

	for (int i = 0; i < t; i++) {
		std::cin >> a >> b >> c;

		if (existAP(a, b, c)) std::cout << "YES";
		else std::cout << "NO";
		std::cout << std::endl;
	}
	return 0;
}