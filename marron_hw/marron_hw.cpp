#include <iostream>


int main()
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	int T = 0;
	int a = 0;
	int b = 0;

	std::cin >> T;
	if (1000000 >= T)
	{
		for (size_t i = 0; i < T; i++)
		{
			std::cin >> a >> b;
			std::cout << a + b << "\n";
		}
	}
	
}