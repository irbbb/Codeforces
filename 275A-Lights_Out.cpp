#include <iostream>
#include <bitset>

const int N_LIGHTS = 9;

void solve() {

	std::bitset<N_LIGHTS> b(0x1FF);

	for (int i = 0; i < N_LIGHTS; i++) {
		int n_press;
		std::cin >> n_press;

		if (n_press % 2) {
			b[i] = !b[i];
			if (i - 1 >= 0 && i % 3) b[i - 1] = !b[i - 1];
			if (i - 3 >= 0) b[i - 3] = !b[i - 3];
			if (i + 1 < N_LIGHTS && (i + 1) % 3) b[i + 1] = !b[i + 1];
			if (i + 3 < N_LIGHTS) b[i + 3] = !b[i + 3];
		}
	}

	for (int i = 0; i < 9; i += 3) {
		for (int j = 0; j < 3; j++) {
			std::cout << b[i + j];
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