﻿// prakt5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "average.h"

int main()
{
    setlocale(LC_ALL, "rus");
    int numsInt[] = { 3,5,6,-5,6 };
    double numsDouble[] = { 4.6, 6.32, 8.1, 4.4, 4.651};
    float numsFloat[] = { 5.581, 3, 4.1, 9.2323, 6.76241 };
    int sizeInt = sizeof(numsInt) / sizeof(numsInt[0]);
    int sizeDouble = sizeof(numsDouble) / sizeof(numsDouble[0]);
    int sizeFloat = sizeof(numsFloat) / sizeof(numsFloat[0] );
    std::cout << "Среднеарифметическое одномерного массива int: " << average(numsInt, sizeInt);
    std::cout << "\nСреднеарифметическое одномерного массива float: " << average(numsFloat, sizeFloat);
    std::cout << "\nСреднеарифметическое одномерного массива double: " << average(numsDouble, sizeDouble);
}




// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.