#include <iostream>
#include <algorithm>

int main() {
	int n, m;
	std::cin >> n >> m;

	n = std::min(n, m);

	if (n % 2) std::cout << "Akshat";
	else std::cout << "Malvika";

	return 0;
}