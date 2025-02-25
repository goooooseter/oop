#include <iostream>
#include "utils.hpp"

int main() {
	int a = 0;
	int b = 0;
	std::cin >> a >> b;
	std::cout << "Sum: " << add(a, b) << std::endl;
	std::cout << "Difference: " << sub(a, b) << std::endl;
	std::cout << "Product: " << mul(a, b) << std::endl;
	return 0;
}