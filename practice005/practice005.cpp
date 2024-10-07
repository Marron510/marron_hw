#include <iostream>

int main()
{

	int x = 0;
	int y = 0;

	std::cin >> x >> y;

	if (0 < x  && 0 < y)
	{
		std::cout << "1";
	}
	else if (0 > x && 0 < y)
	{
		std::cout << "2";
	}
	else if (0 > x && 0 > y)
	{
		std::cout << "3";
	}
	else if (0 < x && 0 > y)
	{
		std::cout << "4";
	}
}
