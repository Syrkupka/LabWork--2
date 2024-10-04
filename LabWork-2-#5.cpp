// LabWork-2-#5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

int main()
{
	int x, y;
	std::cout << "input x: ";
	std::cin >> x;
	std::cout << "input y: ";
	std::cin >> y;
	std::cout << "Adress x: " << &x<<std::endl;
	std::cout << "Adress y: " << &y<<std::endl;
	for (; x <= y; x++)
	{
		std::cout << -x << std::endl;
	}
}

// Користувач вводить ціле число в першу і другу змінну, в циклі один раз виводяться адреси цих змінних, 
// потім виводяться значення від першої до другої змінної, але тільки зі знаком мінус.