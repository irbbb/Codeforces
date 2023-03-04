#include <iostream>
#include <string>

int main() {
	std::string a, b;
	std::cin >> a >> b;

	int val_a = 0, val_b = 0;
	for (int i = 0; i < a.size(); i++) {
		val_a = tolower(a[i]); val_b = tolower(b[i]);
		if (val_a != val_b) {
			break;
		}
	}

	if (val_a > val_b) std::cout << 1;
	else if (val_a == val_b) std::cout << 0;
	else std::cout << -1;

}