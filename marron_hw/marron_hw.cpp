#include <iostream>
int arr1[29] = {};
int arr2[30] = {};
int a = 0;
int b = 0;
int main()
{
	for (size_t i = 0; i < 28; i++)
	{
		std::cin >> a;
		arr1[i] = a;
	}
	for (size_t e = 0; e < 30; e++)
	{
		arr2[e] = e + 1;
	}
	
	for (size_t j = 0; j < 28; j++)
	{
		for (size_t k = 0; k < 30; k++)
		{
			if (arr1[j] == arr2[k])
			{
				break;
			}
			b = arr[k]
			
		}
	}

	for (size_t t = 0; t < 30; t++)
	{
		if (arr2[t] != 0)
		{
			std::cout << arr2[t] << " ";
		}
	}
}