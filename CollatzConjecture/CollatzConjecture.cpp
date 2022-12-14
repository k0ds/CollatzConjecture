#include <iostream>

bool IsOdd(int num);

int main()
{
    int number = 0;
    std::cout << "Enter the number you want to use: ";
    std::cin >> number;

    for (int i = 0; i < 3;)
    {
        if (!IsOdd(number))
            number = number / 2;      
        else
            number = number * 3 + 1;
        
        if (number == 1)
            i++;
        
        std::cout << number << "\n";
    }
}


bool IsOdd(int num)
{
    if (num % 2 == 0)
        return false;
    else
        return true;
}

