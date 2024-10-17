#include <iostream>

int arr1[31] = {31,};
int arr2[29] = {};
int n = 0;
int a = 31;



int main()
{
	int b = 0;
	for (size_t i = 0; i < 28; i++)
	{
		std::cin >> n;
		arr2[i + 1] = n;
	}
	
	for (size_t i = 0; i < 30; i++)
	{
		arr1[i + 1] = 31;
	}

	for (size_t i = 0; i < 28; i++)
	{
		arr1[i + 1] = arr2[i + 1];
		
	}
	
	for (size_t i = 0; i < 30; i++)
	{
		if (31 == arr1[i + 1])
		{
			std::cout << i + 1 << std::endl;
		}
	}
	/*for (size_t i = 0; i < 31; i++)
	{
		if (arr1[i] > arr1[i + 1])
		{
			b = arr1[i];
			arr1[i] = arr1[i + 1];
			arr1[i + 1] = b;
		}
		else if(arr1[i] <= arr1[i + 1])
		{
			break;
		}
	}
	if (arr1[0] > arr1[1])
	{
		std::cout << arr1[1] << std::endl;
		std::cout << arr1[0];
	}
	else
	{
		std::cout << arr1[0] << std::endl;
		std::cout << arr1[1];
	}*/

}