#include <iostream>
#include <queue>

int main() {
	int n, c, i, sum = 0;
	std::priority_queue<int> pq;

	std::cin >> n;

	for (i = 0; i < n; i++) {
		std::cin >> c;
		sum += c;
		pq.push(c);
	}

	c = 0;
	sum /= 2;

	while (c <= sum) {
		c += pq.top();
		pq.pop();
	}

	std::cout << n - pq.size();

	return 0;
}