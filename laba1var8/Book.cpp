#include "Book.h"
#include <iostream>
#include <fstream>

Book::Book() :
	name_(new char[size_n_d]), price_(new char[size_pya]), annotate_(new char[size_n_d]),
	year_(new char[size_pya]), amount_(new char[size_pya]), auhtor_(new char[size_a]), style_(new char[size_a])
{
	std::cout << "Book: Конструктор по умолчанию n";
}

Book::Book(char* name, char* price, char* annotate, char* year, char* amount, char* auhtor, char* style) :
	name_(new char[size_n_d]), price_(new char[size_pya]), annotate_(new char[size_n_d]),
	year_(new char[size_pya]), amount_(new char[size_pya]), auhtor_(new char[size_a]), style_(new char[size_a])
{
	std::cout << "Book: Конструктор с параметрами n";
	copy(name_, name, size_n_d);
	copy(price_, price, size_pya);
	copy(annotate_, annotate, size_n_d);
	copy(year_, year, size_pya);
	copy(amount_, amount, size_pya);
	copy(auhtor_, auhtor, size_a);
	copy(style_, style, size_a);
}

Book::Book(const Book& obj) :
	name_(new char[size_n_d]), price_(new char[size_pya]), annotate_(new char[size_n_d]),
	year_(new char[size_pya]), amount_(new char[size_pya]), auhtor_(new char[size_a]), style_(new char[size_a])
{
	std::cout << "Book: Конструктор копирования \n";
	copy(name_, obj.name_, size_n_d);
	copy(price_, obj.price_, size_pya);
	copy(annotate_, obj.annotate_, size_n_d);
	copy(year_, obj.year_, size_pya);
	copy(amount_, obj.amount_, size_pya);
	copy(auhtor_, obj.auhtor_, size_a);
	copy(style_, obj.style_, size_a);
}

void Book::copy(char* str1, char* str2, int size)
{
	for (int i = 0; i < size; i++)
		*(str1 + i) = *(str2 + i);
}

char* Book::get_Name() const {
	return name_;
}

char* Book::get_Price() const {
	return price_;
}

char* Book::get_Descript() const {
	return annotate_;
}

char* Book::get_Year() const {
	return year_;
}

char* Book::get_Amount() const {
	return amount_;
}

char* Book::get_Auhtor() const {
	return auhtor_;
}

void Book::set_Name(char* name) {
	copy(name_, name, size_n_d);
}

void Book::set_Price(char* price) {
	copy(price_, price, size_pya);
}

void Book::set_Descript(char* annotate) {
	copy(annotate_, annotate, size_n_d);
}

void Book::set_Year(char* year) {
	copy(year_, year, size_pya);
}

void Book::set_Amount(char* amount) {
	copy(amount_, amount, size_pya);
}

void Book::set_Auhtor(char* auhtor) {
	copy(auhtor_, auhtor, size_a);
}

void Book::print() const
{
	using std::cout;
	using std::endl;
	cout << "Name: " << name_ << endl;
	cout << "Price: " << price_ << endl;
	cout << "Annotate: " << annotate_ << endl;
	cout << "Auhtor: " << auhtor_ << endl;
	cout << "Amount: " << amount_ << endl;
	cout << "Year: " << year_ << endl;
	cout << "Style: " << style_ << endl;
}

void Book::out_file() const
{
	using std::ofstream;
	ofstream file;
	file.open(Book_file, std::ios::app);
	if (file.is_open())
	{
		file << std::endl;
		file << name_ << std::endl;
		file << price_ << std::endl;
		file << annotate_ << std::endl;
		file << year_ << std::endl;
		file << amount_ << std::endl;
		file << auhtor_ << std::endl;
		file << style_;
	}
	file.close();
}

Book::~Book()
{
	delete name_;
	delete price_;
	delete year_;
	delete style_;
	delete annotate_;
	delete amount_;
	delete auhtor_;
}