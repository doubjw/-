# Project7

#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	std::cout << "Задача№1\n";
	double S;
	double t;
	double v;
	std::cout << "Введите расстояние до аэропорта в км:";
	std::cin >> S;
	std::cout << "Введите время, за которое нужно доехать, в часах:";
	std::cin >> t;

	if (S == 0 || t == 0)
	{
		std::cout << "Ошибка!! Время/Расстояние не могут быть равны нулю!";
	}
	else
	{
		v = S / t;
		std::cout << "Скорость, с которой нужно будет ехать, равна " << v << " км/ч";
	}

	std::cout << "\nЗадача№2\n";

	int start_hours, start_minutes, start_seconds;
	int end_hours, end_minutes, end_seconds;
	std::cout << "Введите время начала поездки:\n";
	std::cout << "Часы:";
	std::cin >> start_hours;
	std::cout << "Минуты:";
	std::cin >> start_minutes;
	std::cout << "Секунды:";
	std::cin >> start_seconds;
	std::cout << "Введите время конца поездки:\n";
	std::cout << "Часы:";
	std::cin >> end_hours;
	std::cout << "Минуты:";
	std::cin >> end_minutes;
	std::cout << "Секунды:";
	std::cin >> end_seconds;

	int result_start_seconds = start_hours * 3600 + start_minutes * 60 + start_seconds;
	int result_end_seconds = end_hours * 3600 + end_minutes * 60 + end_seconds;
	int result_seconds = result_end_seconds - result_start_seconds;
	int result_minutes = result_seconds / 60;

	if (result_seconds % 60 != 0)
	{
		result_minutes++;
	}

	double price = result_minutes * 2;

	std::cout << "Стоимость поездки: " << price << " гривен";

	std::cout << "\nЗадача№3\n";

	double trip_d, consu;
	double price1, price2, price3;

	std::cout << "Введите расстояние поездки в км:";
	std::cin >> trip_d;
	std::cout << "Введите расход бензина на 100км в литрах:";
	std::cin >> consu;
	std::cout << "Введите стоимость первого бензина в гривнах:";
	std::cin >> price1;
	std::cout << "Введите стоимость второго бензина в гривнах:";
	std::cin >> price2;
	std::cout << "Введите стоимость третьего бензина в гривнах:";
	std::cin >> price3;

	double result = (trip_d / 100) * consu;

	double cost1 = result * price1;
	double cost2 = result * price2;
	double cost3 = result * price3;

	std::cout << "\nСравнительная таблица:\n";
	std::cout << "| Вид бензина | Стоимость за литр | Общая стоимость в гривнах |\n";
	std::cout << "_______________________________________________________\n";
	std::cout << "|   Бензин 1  |  " << price1 << " |  " << cost1 << " |\n";
	std::cout << "_______________________________________________________\n";
	std::cout << "|   Бензин 2  |  " << price2 << " |  " << cost2 << " |\n";
	std::cout << "_______________________________________________________\n";
	std::cout << "|   Бензин 3  |  " << price3 << " |  " << cost3 << " |\n";
	std::cout << "_______________________________________________________\n";
	std::cout << "Расход бензина на поездку: " << result << " литров";

	return 0;

}
