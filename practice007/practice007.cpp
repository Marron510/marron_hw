#include <iostream>

int main()
{
	int H = 24;
	int M = 60;
	int X = 0;
	std::cin >> H >> M >> X;

	if ((H + ((M + X) / 60)) < 24 && 60 <= M + X)
	{
		H = (H + ((M + X) / 60));
		M = (M + X) % 60;

	}
	else if ((H + (M + X) / 60) >= 24 && 60 <= M + X)
	{
		H = (H + ((M + X) / 60)) - 24;
		M = ((M + X) % 60);
	}
	else if ((H + (M + X) / 60) < 24 && 60 > M + X)
	{
		M = M + X;
	}

	
	std::cout << H << " " << M << std::endl;
}
