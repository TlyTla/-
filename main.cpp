#include <iostream>
#include <Windows.h>

int foo(int a, int b)
{
	if (b == 0)
	{
		return 0;
	}
	if (b < 0)
	{
		return -(a + foo(a, -(b) - 1));
	}
	return a + foo(a, b - 1);
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int number1, number2;

	std::cout << "введите первое число: ";
	std::cin >> number1;
	std::cout << "введите второе число: ";
	std::cin >> number2;

	std::cout << foo(number1, number2);


	return 0;
}
