#include <iostream>

int main() {
	int A, B, V, day;
	std::cin >> A >> B >> V;
	day = (V - B - 1) / (A - B) + 1;

	std::cout << day;
}
