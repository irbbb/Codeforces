#include <iostream>
#include <string>

int main() {
	int n = 3;
	scanf_s("%d\n", &n);

	for (unsigned int i = 0; i < n; i++) {
		std::string w;
		std::getline(std::cin, w);
		if (w.size() > 10) {
			std::cout << w[0] << w.size() - 2 << w[w.size() - 1] << std::endl;
		}
		else {
			std::cout << w << std::endl;
		}
	}
}