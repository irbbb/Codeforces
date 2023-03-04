#include <iostream>
#include <vector>
#include <set>

int main() {
	int t, n, m;
	std::cin >> t;

	for (int j = 0; j < t; j++) {
		std::set<int> s;
		std::cin >> n >> m;
		std::vector<int> v(n, -1);

		for (int i = 0; i < m; i++) {
			int temp;
			std::cin >> temp;
			if (s.size() < n) {
				if (s.find(temp) == s.end()) {
					s.insert(temp);
					v[n - s.size()] = i + 1;
				}
			}
		}

		for (auto it : v) {
			std::cout << it << " ";
		}

		std::cout << std::endl;
	}

	return 0;
}