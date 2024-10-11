#include <iostream>
int Arr1[1000000] = {};
int Arr2[1000000] = {};


int main()
{
	int N = 0;

	int X = 0;
	int Result1 = 1000000;
	int Result2 = -1000000;
	std::cin >> N;


	for (size_t i = 0; i < N; i++)
	{
		std::cin >> X;
		Arr1[i] = X;
		Arr2[i] = X;
	}
	for (size_t i = 0; i < N; i++)
	{
		if (Arr1[i] < Result1)
		{
			Result1 = Arr1[i];
		}
	}
	for (size_t i = 0; i < N; i++)
	{
		if (Arr2[i] > Result2)
		{
			Result2 = Arr2[i];
		}
	}

	
	
	std::cout << Result1;
	std::cout << " ";
	std::cout << Result2;
}