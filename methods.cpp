// methods.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Source1.h"

int main()
{
	setlocale(0, "");
	int first, second;
	std::cout << "Введите 2 числа для вычисления площади прямоугольника:" << std::endl;
	scanf_s("%d %d", &first, &second);
	std::cout << "Площадь равна: " << method1(first, second) << std::endl;
	//------------------------------------------------------------------------------------
	std::cout << "Факториал первого числа равен: " << method2(first) << std::endl;
	std::cout << "Факториал второго числа равен: " << method2(second) << std::endl;
}

