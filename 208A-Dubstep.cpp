#include <iostream>
#include <string>

int main() {
	std::string s, w = "";

	std::cin >> s;

	for (int i = 0; i < s.size(); i++) {
		w += s[i];
		if (w.size() > 2 && w[w.size() - 3] == 'W' && w[w.size() - 2] == 'U' && w[w.size() - 1] == 'B') {
			for (int j = 0; j < w.size() - 3; j++) {
				std::cout << w[j];
			}
			if (w.size() > 3) std::cout << " ";
			w = "";
		}
	}

	std::cout << w;

	return 0;
}