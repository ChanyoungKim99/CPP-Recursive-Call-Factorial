/*
* for������ Ǫ�� ���丮��

#include <iostream>

int main()
{
    int number, factorial{ 1 };     // ���ϱ��� �⺻�� = 1
                                    // ���ϱ��� �⺻�� = 0
    std::cout << "���丮���� ���ϼ���" << std::endl;
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

