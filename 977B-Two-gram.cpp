#include <iostream>
#include <map>
#include <string>

int main() {
	int n;
	std::cin >> n;

	std::string s;
	std::map<std::string, int> m;
	std::cin >> s;
	std::string max = s.substr(0, 2);

	for (int i = 1; i < n; i++) {
		std::string sub = s.substr(i - 1, 2);
		if (m.find(sub) == m.end()) {
			m.emplace(sub, 1);
		}
		else {
			m[sub] = m[sub]++;
		}
		if (m[sub] > m[max]) {
			max = sub;
		}
	}

	std::cout << max;

	return 0;
}