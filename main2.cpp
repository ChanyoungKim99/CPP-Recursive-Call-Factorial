#include <iostream>
// 재귀함수로 푸는 팩토리얼

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

// count == 2일 때, return 2 * Factorial (1)
// if 에 의해 return 1, 


int main()
{
	int number{};
	std::cout << "팩토리얼을 구하세요" << std::endl;
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