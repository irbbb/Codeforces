#include <iostream>
#include <vector>

void solve() {
	int n, m;
	std::cin >> n >> m;
	std::vector<long long> v(n);
	std::vector<long long> fw(n);
	std::vector<long long> bw(n);

	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}

	fw[0] = 0;
	for (int i = 1; i < n; i++) {
		if (v[i] - v[i - 1] < 0) {
			fw[i] = fw[i - 1] - (v[i] - v[i - 1]);
		}
		else {
			fw[i] = fw[i - 1];
		}
	}
	bw[n - 1] = 0;
	for (int i = n - 2; i >= 0; i--) {
		if (v[i] - v[i + 1] < 0) {
			bw[i] = bw[i + 1] - (v[i] - v[i + 1]);
		}
		else {
			bw[i] = bw[i + 1];
		}
	}


	for (int i = 0; i < m; i++) {
		int s, t;
		std::cin >> s >> t;
		s--;t--;

		if (s < t) {
			std::cout << fw[t] - fw[s];
		}
		else {
			std::cout << bw[t] - bw[s];
		}
		std::cout << std::endl;
	}
}

int main() {
	int t;
	//std::cin >> t;
	t = 1;

	for (int i = 0; i < t; i++) {
		solve();
	}

	return 0;
}
