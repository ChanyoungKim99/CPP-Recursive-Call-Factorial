#include <iostream>
// ����Լ��� Ǫ�� ���丮��

int Factorial(int count)
{
	// base case
	if (count == 1)
	{
		return 1;
	}

	//recursive case
	return count * Factorial(count - 1);
}

// count == 2�� ��, return 2 * Factorial (1)
// if �� ���� return 1, 


int main()
{
	int number{};
	std::cout << "���丮���� ���ϼ���" << std::endl;
	std::cin >> number;

	if (number == 0)
	{
		std::cout << 1 << std::endl;
	}
	else
	{
		Factorial(number);
		std::cout << Factorial(number) << std::endl;
	}
}