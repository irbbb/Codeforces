#include <iostream>
#include <queue>

int main() {
	int k;
	std::priority_queue<int> pq;

	std::cin >> k;

	for (int i = 0; i < 12; i++) {
		int temp;
		std::cin >> temp;
		pq.emplace(temp);
	}

	while (k > 0 && !pq.empty()) {
		k = k - pq.top();
		pq.pop();
	}

	if (pq.empty() && k > 0) std::cout << -1;
	else std::cout << 12 - pq.size();

}