#include<iostream>

int main() {
	int a, b,temp;
	std::cin >> a;
	std::cin >> b;
	temp = a;
	a = b;
	b = temp;

	std::cout << a << " " << b << std::endl;

	return 0;
}