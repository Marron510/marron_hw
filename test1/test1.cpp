

#include <iostream>


class a
{
public:
	a()
	{
		std::cout << "a";
		function();
	}
	virtual void function()
	{
		std::cout << "af";
	}

};

class b : public a
{
public:
	b()
	{
		std::cout << "b";
		function();
	}
	void function() override
	{
		std::cout << "bf";
	}
};

int main()
{

	b newb = b();
	
}

