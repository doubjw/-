#include <iostream>

int main()
{
	/*int a = 5;
	do
	{
		std::cout << "Hello world!";
	} while (true);
	const int size = 5;
	int arr[size]{ 1,2,3,4,5 };
	arr[0] = 5;
	std::cout << arr[0];

	for (size_t i = 0; i < size; i++)
	{
		std::cout << i + 1 << ") " << arr[i] << "\n";
	}

	const int size = 4;
	int arr[size];
	std::cout << "Введите числа по очереди:\n";
	double summ = 0;

	for (size_t i = 0; i < 4; i++)
	{
		std::cout << i + 1 << ") ";
		std::cin >> arr[i];
		std::cout << "\n";
		summ += arr[i];
	}

	std::cout << "Сумма всех чисел из массива " << summ;
	*/

	setlocale(LC_ALL, "ru");

	std::cout << "Программа Конвертер валют\n";
	double dollar = 0.011;
	double euro = 0.010;
	double yuan = 0.079;
	double farut = 0.0086;
	double yena = 1.63;

	while (true)
	{
		std::cout << "Хотите воспользоваться нашей программой?\nДа - 1, Нет - 2\n";
		int wish;
		std::cin >> wish;
		if (wish < 0 || wish > 2)
		{
			std::cout << "Ошибка! Начните заново!";
			break;
		}
		if (wish == 1)
		{
			std::cout << "Введите количество рублей:";
			double rub;
			std::cin >> rub;
			if (rub <= 0)
			{
				std::cout << "Ошибка! Начните заново!";
				break;
			}
			else
			{
				std::cout << "Выберите валюту:\n1.Доллар\n2.Евро\n3.Юань\n4.Фарит\n5.Йена\n";
				int choice;
				std::cout << "Ваш выбор от 1 до 5:";
				std::cin >> choice;

				if (choice < 1 || choice > 5)
				{
					std::cout << "Ошибка! Выбор не может быть больше 5 и меньше 1.";
				}

				double rubcomishion = rub * 0.95;

				double result;

				if (choice == 1)
				{
					result = rubcomishion * dollar;
					std::cout << "Ваш результат " << result << " долларов.";
				}
				else if (choice == 2)
				{
					result = rubcomishion * euro;
					std::cout << "Ваш результат " << result << " евро.";
				}
				else if (choice == 3)
				{
					result = rubcomishion * yuan;
					std::cout << "Ваш результат " << result << " юаней.";
				}
				else if (choice == 4)
				{
					result = rubcomishion * farut;
					std::cout << "Ваш результат " << result << " фарит.";
				}
				else if (choice == 5)
				{
					result = rubcomishion * yena;
					std::cout << "Ваш результат " << result << " йен.";
				}

				else
				{
					std::cout << "До свидания!";
					break;
				}
			}
			double comishion = rub * 0.05;
			std::cout << "\nКомиссия банка: " << comishion << " рублей.\n";
		}
		break;
	}
	return 0;
}