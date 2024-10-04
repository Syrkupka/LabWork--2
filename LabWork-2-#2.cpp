// LabWork-2-#2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

int main()
{
	unsigned short firstYear, lastYear, mijYearsami = 0, tens=0;
	std::cout << "Vvedit pershiy rik: ";
	std::cin >> firstYear;
	std::cout << "Vvedit drugiy rik: ";
	std::cin >> lastYear;
	firstYear = std::min(int(firstYear), 9999);
	lastYear = std::min(int(lastYear), 9999);
	std::cout << "Vashi roki: "<<firstYear<<" takoj "<<lastYear<<std::endl;
	for (int i = firstYear; i < lastYear; i++)
	{
		mijYearsami++;
		std::cout << "Munylo: " << mijYearsami << std::endl;
		if (!(mijYearsami % 10))
		{
			tens++;
		}
		if (mijYearsami >= 100) break;
	}
	std::cout << "Disyatki: "<<tens;
}

// 2. Напишіть програму, користувач якої вписує значення двох років (умовно, 1976 та 2010), 
// виводить ці роки та виводить скільки років пройшло між першим та 
// другим значенням – зробити це все через цикл. Якщо загальна кількість 
// років більше 100 – зробити вихід із циклу. Також кожен десятий елемент 
// у циклі враховувати і вивести їх загальну кількість. 
// Зробити також перевірку для введення неправильних значень.
