#include <iostream>
#include "fibonacci_recurse.h"


int main()
{
	const std::string msg = "Введите номер для числа Фибоначчи: ";
	const std::string fail_msg = "Неверный ввод, повторите ввод целого числа!";
	const std::string res_msg = "Число Фибоначчи с номером ";
	std::string in_user = "";

	int number  = 0;

	bool check = false;
	do
	{
		std::cout << msg;
		std::cin >> in_user;
		try
		{
			number = std::stoi(in_user);
			check = true;
		}
		catch (std::invalid_argument e)
		{
			std::cout << fail_msg << std::endl;
			check = false;
		}
		
	} while (!check);


	long long res = fibonacci_recurse(number);

	std::cout << res_msg << number << " = " << res << std::endl;

	return 0;
}
