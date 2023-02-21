#include <iostream>
using namespace std;


class Counting_in_color // создаём класс Counting_in_color
{

public: // публичные данные

	int col1, col2;
	string cl1, cl2;

	int cin_var_col() // функция cin_var_col() 
	{
		cin >> col1;
		cin >> col2;

		return 0;
	}

	int sum_col1() // функция sum_col1() в которой происходит проверка переменной col1 
	{
		switch (col1)
		{
		case 0:
			cout << "Black|";
			break;

		case 1:
			cout << "Brown|";
			break;

		case 2:
			cout << "Red|";
			break;

		case 3:
			cout << "Orange|";
			break;

		case 4:
			cout << "Yellow|";
			break;

		case 5:
			cout << "Green|";
			break;

		case 6:
			cout << "Blue|";
			break;

		case 7:
			cout << "Purple|";
			break;

		case 8:
			cout << "Gray|";
			break;

		case 9:
			cout << "White|";
			break;
		}

		return 0;
	}
	int sum_col2() // функция sum_col2() в которой происходит проверка переменной col2
	{
		switch (col2)
		{
		case 0:
			cout << "Black ";
			break;

		case 1:
			cout << "Brown|";
			break;

		case 2:
			cout << "Red|";
			break;

		case 3:
			cout << "Orange|";
			break;

		case 4:
			cout << "Yellow|";
			break;

		case 5:
			cout << "Green|";
			break;

		case 6:
			cout << "Blue|";
			break;

		case 7:
			cout << "Purple|";
			break;

		case 8:
			cout << "Gray|";
			break;

		case 9:
			cout << "White|";
			break;
		}


		return 0;
	}

};

class Counting_in_number : Counting_in_color // создаём класс Counting_in_number который будет наследовать переменные из класса Counting_in_color 
{
public:
	int cin_var_num() //функция cin_var_num()
	{
		cin >> cl1;
		cin >> cl2;

		return 0;
	}
	int Color_in_Numbers_cl1() // функция Color_in_Numbers_cl1 которая проверяет переменную cl1 на наличие слова
	{
		if (cl1 == "Black")
		{
			cout << "0";
		}

		if (cl1 == "Brown")
		{
			cout << "1";
		}

		if (cl1 == "Red")
		{
			cout << "2";
		}

		if (cl1 == "Orange")
		{
			cout << "3";
		}

		if (cl1 == "Yellow")
		{
			cout << "4";
		}

		if (cl1 == "Green")
		{
			cout << "5";
		}

		if (cl1 == "Blue")
		{
			cout << "6";
		}

		if (cl1 == "Purple")
		{
			cout << "7";
		}

		if (cl1 == "Gray")
		{
			cout << "8";
		}

		if (cl1 == "White")
		{
			cout << "9";
		}

		return 0;

	}

	int Color_in_Numbers_cl2() // функция Color_in_Numbers_cl2 которая проверяет переменную cl2 на наличие слова

	{
		if (cl2 == "Black")
		{
			cout << "0";
		}

		if (cl2 == "Brown")
		{
			cout << "1";
		}

		if (cl2 == "Red")
		{
			cout << "2";
		}

		if (cl2 == "Orange")
		{
			cout << "3";
		}

		if (cl2 == "Yellow")
		{
			cout << "4";
		}

		if (cl2 == "Green")
		{
			cout << "5";
		}

		if (cl2 == "Blue")
		{
			cout << "6";
		}

		if (cl2 == "Purple")
		{
			cout << "7";
		}

		if (cl2 == "Gray")
		{
			cout << "8";
		}

		if (cl2 == "White")
		{
			cout << "9";
		}

		return 0;
	}
	

};