#include "Book.h"
#include "Market.h"
#include "Textbook.h"
#include "Office.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	char* name = new char[size_n_d];
	char* name1 = new char[size_pya];
	char* name2 = new char[size_n_d];
	char* name3 = new char[size_pya];
	char* name4 = new char[size_pya];
	char* name5 = new char[size_a];
	char* name6 = new char[size_a];
	cin >> name;
	cin >> name1;
	cin >> name2;
	cin >> name3;
	cin >> name4;
	cin >> name5;
	cin >> name6;
	Book obj(name, name1, name2, name3, name4, name5, name6);
	Market* p = &obj;
//	p->print();
	system("pause");
	delete name;
	delete name1;
//	p->print();
	system("pause");
}