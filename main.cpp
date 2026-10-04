#include <iostream>

// Lab 6 — Joshua Van Brunt
// CIS 5 Week 06 · Even and odd

int main() {
	for (int even = 2; even <= 100; even ++) {
		if (even % 2 == 0) {
			std::cout << even << " is even" << std::endl;
		}
	}
	int odd = 1;
	while (odd <= 99) {
		if (odd % 2 != 0) {
			std::cout << odd << " is odd" << std::endl;
		}
		odd ++;
	}
	return 0;
}