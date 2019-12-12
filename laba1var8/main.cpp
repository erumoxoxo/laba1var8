#include "Book.h"
#include "Market.h"
#include "Textbook.h"
#include "Office.h"
#include "Keeper.h"
#include <iostream>
#include <Windows.h>
using namespace std;

bool check_error(char* str)//����� ������, ���� � ���� ��� ����� ������� �����
{
	int i = 0;
	try {
		while (*(str + i) != '\0')
		{
			if ('a' <= *(str + i) && *(str + i) <= 'z') {
				throw - 1;
				break;
			}
			if ('A' <= *(str + i) && *(str + i) <= 'Z') {
				throw - 1;
				break;
			}
			i++;
		}
	}
	catch (int) {
		cout << "������: � ������ ���� ����� ���� ������ �����\n ������� ������ ������\n";
		return 1;
	}
	return 0;
}

Market* add()
{
	system("cls");
	int num;
	cout << "����� �����/������� ���������� ��������:\n";
	cout << "1.���.����������\n2.�������\n3.����������\n";

	try {
		if (!(cin >> num))
		{
			throw 't';
		}
		if (num < 1 || 3 < num)
			throw - 1;
	}
	catch (int)
	{
		cout << "������: ������� ������������ �������� (< 0 ��� 3 <)" << num;
		system("pause");
	}
	switch (num)
	{
	case 1:
	{
		char* name = new char[size_n_d];
		char* price = new char[size_pya];
		char* annotate = new char[size_n_d];
		char* year = new char[size_pya];
		char* amount = new char[size_pya];
		char* auhtor = new char[size_a];
		char* style = new char[size_a];

		cin.get();
		do {
			cout << "��������: ";
			SetConsoleCP(1251);
			cin.getline(name, size_n_d);
			SetConsoleCP(866);

			cout << "����: ";
			cin.getline(price, size_pya);
			if (check_error(price)) continue;//���� ������ ������ (�� �����), �� ���������� ����

			cout << "���������: ";
			cin.getline(annotate, size_n_d);
			cout << "��� �������: ";
			cin.getline(year, size_pya);
			if (check_error(year)) continue;

			cout << "����� �������: ";
			cin.getline(amount, size_pya);
			if (check_error(amount)) continue;

			cout << "�����: ";
			cin.getline(auhtor, size_a);
			cout << "����: ";
			cin.getline(style, size_a);

			Book* obj = new Book(name, price, annotate, year, amount, auhtor, style);

			delete[] name;
			delete[] price;
			delete[] annotate;
			delete[] year;
			delete[] amount;
			delete[] auhtor;
			delete[] style;

			return obj;
		} while (true);
	}
	case 2:
	{
		char* name = new char[size_n_d];
		char* price = new char[size_pya];
		char* institut = new char[size_n_d];
		char* year = new char[size_pya];
		char* amount = new char[size_pya];
		char* year_study = new char[size_pya];
		char* auhtor = new char[size_a];

		cin.get();
		do {
			cout << "��������: ";
			cin.getline(name, size_n_d);
			cout << "����: ";
			cin.getline(price, size_pya);
			if (check_error(price)) continue;

			cout << "������� ���������: ";
			cin.getline(institut, size_n_d);
			cout << "��� �������: ";
			cin.getline(year, size_pya);
			if (check_error(year)) continue;

			cout << "����� �������: ";
			cin.getline(amount, size_pya);
			if (check_error(amount)) continue;

			cout << "�����: ";
			cin.getline(auhtor, size_a);
			cout << "���� ��������: ";
			cin.getline(year_study, size_pya);

			Textbook* obj = new Textbook(name, price, institut, year, amount, auhtor, year_study);

			delete[] name;
			delete[] price;
			delete[] institut;
			delete[] year;
			delete[] amount;
			delete[] auhtor;
			delete[] year_study;

			return obj;
		} while (true);
	}
	case 3:
	{
		char* name = new char[size_n_d];
		char* price = new char[size_pya];
		char* mission = new char[size_n_d];
		char* color = new char[size_pya];

		cin.get();
		do {
			cout << "��������: ";
			cin.getline(name, size_n_d);
			cout << "����: ";
			cin.getline(price, size_pya);
			if (check_error(price)) continue;

			cout << "��� ���� �������������: ";
			cin.getline(mission, size_n_d);
			cout << "����: ";
			cin.getline(color, size_pya);

			Office* obj = new Office(name, price, mission, color);

			delete[] name;
			delete[] price;
			delete[] mission;
			delete[] color;

			return obj;
		} while (true);
	}
	default:
		break;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	int num = 0;
	Keeper list;
	//Band* p;
	cout << "�������� ��������\n";
	cout << "0.�����\n";
	cout << "1.��������� ������ �� �����\n";
	cout << "2.��������� ������ � ����\n";
	cout << "3.�������� ������\n";
	cout << "4.������� ������\n";
	cout << "5.������� ���� ������\n";
	cout << "\n����� ����: ";
	try {
		if (!(cin >> num))
		{
			throw 't';
		}
		if (num < 0 || 5 < num)
			throw - 1;
	}
	catch (int)
	{
		cout << "������: ������� �������� �������� (������� 0-5)" << num;
		system("pause");
	}
	while (num) {
		switch (num)
		{
		case 1:
			if (!list.load_file())
				cout << "��� ������ ��� ������\n\n";
			system("pause");
			break;
		case 2:
			list.save_file();
			break;
		case 3:
			list.push_back(add());
			break;
		case 4:
			cout << list;
			if (list.get_Size())
			{
				cout << "������� ����� ������ ��� ��������: ";
				cin >> num;
				list.delet(num);
			}
			else
				cout << "� ������ ��� �������!\n";
			break;
		case 5:
			cout << list;
			system("pause");
		default:
			break;
		}
		system("cls");
		cout << "�������� ��������\n";
		cout << "0.�����\n";
		cout << "1.��������� ������ �� �����\n";
		cout << "2.��������� ������ � ����\n";
		cout << "3.�������� ������\n";
		cout << "4.������� ������\n";
		cout << "5.������� ���� ������\n";
		cout << "\n����� ����: ";
		try {
			if (!(cin >> num))
			{
				throw 't';
			}
			if (num < 0 || 5 < num)
				throw - 1;
		}
		catch (int)
		{
			cout << "������: ������� �������� �������� (������� 0-5)" << num;
			system("pause");
		}
	}
	//system("pause");
	return 0;
}