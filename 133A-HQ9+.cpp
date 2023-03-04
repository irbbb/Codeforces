#include <iostream>

int main() {
	char c;


	while (std::cin.get(c)) {
		if (c == '\n')
		{
			std::cout << "NO";
			break;
		}

		if (c == 'H' || c == 'Q' || c == '9') {
			std::cout << "YES";
			break;
		}
	}

	return 0;
}