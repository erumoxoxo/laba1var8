#include "Office.h"
#include <iostream>

Office::Office() :
	name_(new char[size_n_d]), price_(new char[size_pya]), mission_(new char[size_n_d]), color_(new char[size_pya])
{
	std::cout << "Office: конструктор по умолчанию n";
/*	name_ = "--";
	price_ = "--";
	mission_ = "--";
	color_ = "--";
*/}

Office::Office(char* name, char* price, char* mission, char* color) :
	name_(new char[size_n_d]), price_(new char[size_pya]), mission_(new char[size_n_d]), color_(new char[size_pya])
{
	std::cout << "Office: конструктор с параметрами n";
	copy(name_, name, size_n_d);
	copy(price_, price, size_pya);
	copy(mission_, mission, size_n_d);
	copy(color_, color, size_pya);
}

Office::Office(const Office& obj) :
	name_(new char[size_n_d]), price_(new char[size_pya]), mission_(new char[size_n_d]), color_(new char[size_pya])
{
	std::cout << "Office: конструктор \n";
	copy(name_, obj.name_, size_n_d);
	copy(price_, obj.price_, size_pya);
	copy(mission_, obj.mission_, size_n_d);
	copy(color_, obj.color_, size_pya);
}

void Office::copy(char* str1, char* str2, int size)
{
	for (int i = 0; i < size; i++)
		*(str1 + i) = *(str2 + i);
}

char* Office::get_Name() const {
	return name_;
}

char* Office::get_Price() const {
	return price_;
}

char* Office::get_Mission() const {
	return mission_;
}

char* Office::get_Color() const {
	return color_;
}

void Office::set_Name(char* name) {
	copy(name_, name, size_n_d);
}

void Office::set_Price(char* price) {
	copy(price_, price, size_pya);
}

void Office::set_Mission(char* mission) {
	copy(mission_, mission, size_n_d);
}

void Office::set_Color(char* color) {
	copy(color_, color, size_pya);
}

void Office::print() const
{
	using std::cout;
	using std::endl;
	cout << "Name: " << name_ << endl;
	cout << "Price: " << price_ << endl;
	cout << "Annotate: " << mission_ << endl;
	cout << "Auhtor: " << color_ << endl;
}

void Office::out_file() const
{

}

Office::~Office()
{
	delete name_;
	delete price_;
	delete mission_;
	delete color_;
}