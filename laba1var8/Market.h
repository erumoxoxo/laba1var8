#pragma once
const int size_n_d = 70;//размер полей: название и описание
const int size_pya = 10;//длина полей: цена, год выпуска, страницы
const int size_a = 20;//длина полей: жанр, автор, цвет;

class Market
{
public:
	virtual char* get_Name() const = 0;//доступ к названию
	virtual char* get_Price() const = 0;//к цене
	virtual char* get_Descript() const = 0;//описание, доступ к аннотации,предназначению и назначению(канцел€ри€)
	//virtual char* get_Year() const;//год выпуска
	//virtual char* get_Amount() const;//объем страниц
	//virtual char* get_Auhtor() const;//автор

	virtual void set_Name(char*) = 0;//доступ к названию
	virtual void set_Price(char*) = 0;//к цене
	virtual void set_Descript(char*) = 0;//описание, доступ к аннотации,предназначению и назначению(канцел€ри€)
	virtual void set_Year(char*);//год выпуска
	virtual void set_Amount(char*);//объем страниц
	virtual void set_Auhtor(char*);//автор

	virtual void print() const = 0;//вывод на экран
	virtual void out_file() const = 0;//вывод в файл
	virtual ~Market() {};
};

