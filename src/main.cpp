#include <iostream>
#include "utils.hpp"

int main() {
	int a = 0;
	int b = 0;
	std::cin >> a >> b;
	std::cout << "a + b = " << add(a, b) << std::endl;
	std::cout << "a - b = " << sub(a, b) << std::endl;
	std::cout << "a * b = " << mul(a, b) << std::endl;
	return 0;
}