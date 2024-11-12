#include <iostream>
#include <Windows.h>
#include <cstdlib>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	const int strok = 4;
	const int stolb = 4;
	int mass[strok][stolb]{}, number= 0;
	std::cout << "задание 1\n";
	std::cout << "¬ведите число: ";
	std::cin >> number;

	for (int i = 0; i < strok; i++)
	{
		std::cout<<  std::endl;
		for (int j = 0; j < stolb; j++)
		{
			
			mass[i][j] = number;
			std::cout << mass[i][j] << "\t";
			number *= 2;
		}
	}
	std::cout << std::endl;

	const int strok1 = 12;
	const int stolb1 = 12;
	int mass1[strok1][stolb1]{}, number1 = 0;
	std::cout << "задание 2\n";
	std::cout << "¬ведите число: ";
	std::cin >> number1;

	for (int i = 0; i < strok1; i++)
	{
		std::cout << std::endl;
		for (int j = 0; j < stolb1; j++)
		{

			mass1[i][j] = number1;
			std::cout << mass1[i][j] << "\t";
			number1 += 1;
		}
	}
	std::cout << std::endl;

	return 0;
}
