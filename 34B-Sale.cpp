#include <iostream>
#include <queue>

int main() {
	int n, m;
	std::cin >> n >> m;
	std::priority_queue<int> pq;

	for (int i = 0; i < n; i++) {
		int c;
		std::cin >> c;
		if (c < 0) {
			pq.emplace(-c);
		}
	}

	int sum = 0;

	for (int i = 0; i < m && !pq.empty(); i++) {
		sum += pq.top();
		pq.pop();
	}

	std::cout << sum;

	return 0;
}