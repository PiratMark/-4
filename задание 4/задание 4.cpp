#include <iostream>

int main()
{
	int a, res = 1;
	std::cin >> a;
	for (int i = a; i <= 20; i++) res *= i;
	std::cout << res;


}
