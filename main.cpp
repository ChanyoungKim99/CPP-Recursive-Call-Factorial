/*
* for문으로 푸는 팩토리얼

#include <iostream>

int main()
{
    int number, factorial{ 1 };     // 곱하기의 기본값 = 1
                                    // 더하기의 기본값 = 0
    std::cout << "팩토리얼을 구하세요" << std::endl;
    std::cin >> number;

    for (int i = 1; i <= number; i++)
    {
        if (number == 0)
        {
            factorial = 1;
        }
        factorial *= i;
    }

    std::cout << factorial << std::endl;
}
*/

