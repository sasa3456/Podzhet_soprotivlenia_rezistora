#include <iostream>
#include <string>
#include "Checks.cpp"
using namespace std;



int main()
{
	Counting_in_color cic; //подключаем класс "Counting_in_color" как cic
	Counting_in_number cin_c; //подключаем класс "Counting_in_number" как cin_c
	
	setlocale(LC_ALL, "Russian"); //выбираем русский текст в консоли

	string Choice;

	cout << "Как вы хотите посчитать сопротивление резитра?" << endl;
	cout << "Напишите \"col\" если хотите выбрать цвета для подсчёта сопротивления резистра, и \"num\" если хотите ввести цифры" << endl;

	cin >> Choice;


	if (Choice == "num") // проверка переменной Choice на наличие слова num
	{
		cout << "Отлично! Теперь введите числа" << endl;
		cic.cin_var_col(); // используем функцию cin_var_col() из класса Counting_in_color
		cic.sum_col1(); // используем функцию sum_col1() из класса Counting_in_color
		cic.sum_col2(); // используем функцию sum_col2() из класса Counting_in_color
	}

	if (Choice == "col") // проверка переменной Choice на наличие слова col
	{
		cout << "Отлично! Теперь введите цвета с большой буквы. Пример: Green" << endl;
		cin_c.cin_var_num(); // используем функцию cin_var_num() из класса Counting_in_number
		cin_c.Color_in_Numbers_cl1(); // используем функцию Color_in_Numbers_cl1() из класса Counting_in_number
		cin_c.Color_in_Numbers_cl2(); // используем функцию Color_in_Numbers_cl2() из класса Counting_in_number
	}



	return 0;
}