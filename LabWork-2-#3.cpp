// LabWork-2-#3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

int main()
{
    int height = 52, maxLength;
    maxLength = 1 + (height * 2);
    for (int ay = 0; ay <= height; ay++)
    {
        for (int ae = 0; ae < maxLength; ae++)
        {
            if (ae < height - ay || ae > (height - ay) + ay * 2) std::cout << " ";
            else std::cout << "*";
        } 
        std::cout << std::endl;
    }
}

// 3. Використовуючи вкладені цикли, виведіть на екран трикутник із зірочок.