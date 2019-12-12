#include "Textbook.h"
#include <iostream>
#include <fstream>

Textbook::Textbook() :
	name_(new char[size_n_d]), price_(new char[size_pya]), institut_(new char[size_n_d]),
	year_(new char[size_pya]), amount_(new char[size_pya]), auhtor_(new char[size_a]), year_study_(new char[size_pya])
{
	std::cout << "Textbook: 觐眈蝠箨蝾� 镱 箪铍鬣龛n";
}

Textbook::Textbook(char* name, char* price, char* institut, char* year, char* amount, char* auhtor, char* year_study) :
	name_(new char[size_n_d]), price_(new char[size_pya]), institut_(new char[size_n_d]),
	year_(new char[size_pya]), amount_(new char[size_pya]), auhtor_(new char[size_a]), year_study_(new char[size_pya])
{
	std::cout << "Textbook: 觐眈蝠箨蝾� � 镟疣戾蝠囔鑌n";
	copy(name_, name, size_n_d);
	copy(price_, price, size_pya);
	copy(institut_, institut, size_n_d);
	copy(year_, year, size_pya);
	copy(amount_, amount, size_pya);
	copy(auhtor_, auhtor, size_a);
	copy(year_study_, year_study, size_pya);
}

Textbook::Textbook(const Textbook& obj) :
	name_(new char[size_n_d]), price_(new char[size_pya]), institut_(new char[size_n_d]),
	year_(new char[size_pya]), amount_(new char[size_pya]), auhtor_(new char[size_a]), year_study_(new char[size_pya])
{
	std::cout << "Textbook: 觐眈蝠箨蝾� 觐镨痤忄龛\n";
	copy(name_, obj.name_, size_n_d);
	copy(price_, obj.price_, size_pya);
	copy(institut_, obj.institut_, size_n_d);
	copy(year_, obj.year_, size_pya);
	copy(amount_, obj.amount_, size_pya);
	copy(auhtor_, obj.auhtor_, size_a);
	copy(year_study_, obj.year_study_, size_a);
}

void Textbook::copy(char* str1, char* str2, int size)
{
	for (int i = 0; i < size; i++)
		*(str1 + i) = *(str2 + i);
}

char* Textbook::get_Name() const {
	return name_;
}

char* Textbook::get_Price() const {
	return price_;
}

char* Textbook::get_Descript() const {
	return institut_;
}

char* Textbook::get_Year() const {
	return year_;
}

char* Textbook::get_Amount() const {
	return amount_;
}

char* Textbook::get_Auhtor() const {
	return auhtor_;
}

void Textbook::set_Name(char* name) {
	copy(name_, name, size_n_d);
}

void Textbook::set_Price(char* price) {
	copy(price_, price, size_pya);
}

void Textbook::set_Descript(char* institut) {
	copy(institut_, institut, size_n_d);
}

void Textbook::set_Year(char* year) {
	copy(year_, year, size_pya);
}

void Textbook::set_Amount(char* amount) {
	copy(amount_, amount, size_pya);
}

void Textbook::set_Auhtor(char* auhtor) {
	copy(auhtor_, auhtor, size_a);
}

void Textbook::set_Year_study(char* year_study)
{
	copy(year_study_, year_study, size_pya);
}

void Textbook::print() const
{
	using std::cout;
	using std::endl;
	cout << "Name: " << name_ << endl;
	cout << "Price: " << price_ << endl;
	cout << "Institut: " << institut_ << endl;
	cout << "Auhtor: " << auhtor_ << endl;
	cout << "Amount: " << amount_ << endl;
	cout << "Year: " << year_ << endl;
	cout << "Year study: " << year_study_ << endl;
}

void Textbook::out_file() const
{
	using std::ofstream;
	ofstream file;
	file.open(Textbook_file, std::ios::app);
	if (file.is_open())
	{
		file << std::endl;
		file << name_ << std::endl;
		file << price_ << std::endl;
		file << institut_ << std::endl;
		file << year_ << std::endl;
		file << amount_ << std::endl;
		file << auhtor_ << std::endl;
		file << year_study_;
	}
	file.close();
}

Textbook::~Textbook()
{
	delete[] name_;
	delete[] price_;
	delete[] auhtor_;
	delete[] year_;
	delete[] year_study_;
	delete[] amount_;
	delete[] institut_;
}
