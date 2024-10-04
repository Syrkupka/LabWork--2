// LabWork-2-#4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

int main()
{
    int N;
    std::cin >> N;
    for (int i = 2; i <= N; i++)
    {
        bool simple = true;
        for (int x = 2; x <= i; x++)
        {
            if (i != x && !(i % x)) {
                simple = false;
                break;
            }
        }
        if (simple) std::cout << i << std::endl;
    }
}

// Напишіть програму, яка виводить усі прості числа від 1 до N (використовуйте цикл та перевірку на простоту).