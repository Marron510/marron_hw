#include <iostream>
int Arr[10] = {};
int a = 0;
int max = 0;
int maxnum = 0;
int main()
{
	for (size_t i = 0; i < 9; i++)
	{
		std::cin >> a;
		Arr[i] = a;
	}
	for (size_t i = 0; i < 9; i++)
	{
		if (Arr[i] > max)
		{
			max = Arr[i];
			maxnum = i;
		}
	}
	std::cout << max << std::endl;
	std::cout << maxnum  + 1 << std::endl;
}