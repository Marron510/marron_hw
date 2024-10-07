#include <iostream>
using namespace std;

int main()
{
	int a{}, b{};
	// 123  321
	cin >> a >> b;
	
	cout << a * (b % 10) << endl;
	cout << a * ((b % 100) / 10) << endl;
	cout << a * (b /100) << endl;
	cout << a * b << endl;

	
}