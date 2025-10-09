# Project7

#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");

	std::cout << "Задача№1\n";

    int num;

    std::cout << "Введите шестизначное число:";
    std::cin >> num;

    if (num < 100000 || num > 999999) 
    {
        std::cout << "Ошибка! Число должно быть шестизначным!\n";
        return 0;
    }

    int digit1 = num / 100000;
    int digit2 = (num / 10000) % 10;
    int digit3 = (num / 1000) % 10;
    int digit4 = (num / 100) % 10;
    int digit5 = (num / 10) % 10;
    int digit6 = num % 10;

    int sum1 = digit1 + digit2 + digit3;
    int sum2 = digit4 + digit5 + digit6;

    if (sum1 == sum2)
    {
        std::cout << "Число " << num << " является счастливым!\n";
    }
    else
    {
        std::cout << "Число " << num << " не является счастливым.\n";
    }

    std::cout << "\nЗадача№2\n";

    int number;

    std::cout << "Введите четырехзначное число:";
    std::cin >> number;

    if (number < 1000 || number > 9999)
    {
        std::cout << "Ошибка! Число должно быть четырехзначным!\n";
    }

    int d1 = number / 1000;
    int d2 = (number / 100) % 10;
    int d3 = (number / 10) % 10;
    int d4 = number % 10;

    int number2 = d2 * 1000 + d1 * 100 + d4 * 10 + d3;

    std::cout << "Число после перестановки " << number2 << "\n";

    std::cout << "\nЗадача№3\n";

    int numbers[7];

    std::cout << "Введите 7 целых чисел:\n";

    for (int i = 0; i < 7; i++) 
    {
        std::cout << "Число " << (i + 1) << ":";
        std::cin >> numbers[i];
    }

    int max = numbers[0];

    for (int i = 1; i < 7; i++) 
    {
        if (numbers[i] > max) 
        {
            max = numbers[i];
        }
    }

    std::cout << "Максимальное число " << max << "\n";

	return 0;

}
