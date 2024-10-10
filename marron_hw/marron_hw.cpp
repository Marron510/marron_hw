#include <iostream>


int main()
{
	int A = 0;
	int B = 0;
	int Add = 0;
	
	while (true)
	{
		if (std::cin >> A >> B)
		{
			Add = A + B;
			std::cout << Add << std::endl;

		}
		else
		{
			return 0;
		}
		}
}
