#include <iostream>

int main()
{
    int H = 24;
    int M = 60;

    std::cin >> H >> M;

	if (H != 0 && M <45)
	{
		H = H - 1;
		M = M + 15;
	}
	else if (H == 0 && M < 45)
	{
		H = H + 23;
		M = M + 15;

	}
	else if (M >= 45)
	{
		M = M - 45;
	}

	std::cout << H << " " << M << std::endl;
}
