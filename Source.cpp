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
	std::cout << "������� ����� �� �������:\n";
	double summ = 0;

	for (size_t i = 0; i < 4; i++)
	{
		std::cout << i + 1 << ") ";
		std::cin >> arr[i];
		std::cout << "\n";
		summ += arr[i];
	}

	std::cout << "����� ���� ����� �� ������� " << summ;
	*/

	setlocale(LC_ALL, "ru");

	std::cout << "��������� ��������� �����\n";
	double dollar = 0.011;
	double euro = 0.010;
	double yuan = 0.079;
	double farut = 0.0086;
	double yena = 1.63;

	while (true)
	{
		std::cout << "������ ��������������� ����� ����������?\n�� - 1, ��� - 2\n";
		int wish;
		std::cin >> wish;
		if (wish < 0 || wish > 2)
		{
			std::cout << "������! ������� ������!";
			break;
		}
		if (wish == 1)
		{
			std::cout << "������� ���������� ������:";
			double rub;
			std::cin >> rub;
			if (rub <= 0)
			{
				std::cout << "������! ������� ������!";
				break;
			}
			else
			{
				std::cout << "�������� ������:\n1.������\n2.����\n3.����\n4.�����\n5.����\n";
				int choice;
				std::cout << "��� ����� �� 1 �� 5:";
				std::cin >> choice;

				if (choice < 1 || choice > 5)
				{
					std::cout << "������! ����� �� ����� ���� ������ 5 � ������ 1.";
				}

				double rubcomishion = rub * 0.95;

				double result;

				if (choice == 1)
				{
					result = rubcomishion * dollar;
					std::cout << "��� ��������� " << result << " ��������.";
				}
				else if (choice == 2)
				{
					result = rubcomishion * euro;
					std::cout << "��� ��������� " << result << " ����.";
				}
				else if (choice == 3)
				{
					result = rubcomishion * yuan;
					std::cout << "��� ��������� " << result << " �����.";
				}
				else if (choice == 4)
				{
					result = rubcomishion * farut;
					std::cout << "��� ��������� " << result << " �����.";
				}
				else if (choice == 5)
				{
					result = rubcomishion * yena;
					std::cout << "��� ��������� " << result << " ���.";
				}

				else
				{
					std::cout << "�� ��������!";
					break;
				}
			}
			double comishion = rub * 0.05;
			std::cout << "\n�������� �����: " << comishion << " ������.\n";
		}
		break;
	}
	return 0;
}