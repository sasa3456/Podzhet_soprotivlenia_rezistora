#include <iostream>
#include <string>
#include "Checks.cpp"
using namespace std;



int main()
{
	Counting_in_color cic; //���������� ����� "Counting_in_color" ��� cic
	Counting_in_number cin_c; //���������� ����� "Counting_in_number" ��� cin_c
	
	setlocale(LC_ALL, "Russian"); //�������� ������� ����� � �������

	string Choice;

	cout << "��� �� ������ ��������� ������������� �������?" << endl;
	cout << "�������� \"col\" ���� ������ ������� ����� ��� �������� ������������� ��������, � \"num\" ���� ������ ������ �����" << endl;

	cin >> Choice;


	if (Choice == "num") // �������� ���������� Choice �� ������� ����� num
	{
		cout << "�������! ������ ������� �����" << endl;
		cic.cin_var_col(); // ���������� ������� cin_var_col() �� ������ Counting_in_color
		cic.sum_col1(); // ���������� ������� sum_col1() �� ������ Counting_in_color
		cic.sum_col2(); // ���������� ������� sum_col2() �� ������ Counting_in_color
	}

	if (Choice == "col") // �������� ���������� Choice �� ������� ����� col
	{
		cout << "�������! ������ ������� ����� � ������� �����. ������: Green" << endl;
		cin_c.cin_var_num(); // ���������� ������� cin_var_num() �� ������ Counting_in_number
		cin_c.Color_in_Numbers_cl1(); // ���������� ������� Color_in_Numbers_cl1() �� ������ Counting_in_number
		cin_c.Color_in_Numbers_cl2(); // ���������� ������� Color_in_Numbers_cl2() �� ������ Counting_in_number
	}



	return 0;
}