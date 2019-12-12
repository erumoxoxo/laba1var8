#pragma once
#include "Market.h"

class Book : public Market
{

private:
	char* name_;//название
	char* price_;//цена
	char* annotate_;//аннотаци€
	char* year_;//год выпуска
	char* amount_;//количество страниц
	char* auhtor_;//автор
	char* style_;//жанр

	void copy(char*, char*, int);//функци€ копировани€ полей в конструкторе и в set_.. ;

public:
	Book();
	Book(char* name, char* price, char* annotate, char* year, char* amount, char* auhtor, char* style);
	Book(const Book& obj);

	char* get_Name() const;//доступ к названию
	char* get_Price() const;//к цене
	char* get_Descript() const;//описание, доступ к аннотации,предназначению и назначению(канцел€ри€)
	char* get_Year() const;//год выпуска
	char* get_Amount() const;//объем страниц
	char* get_Auhtor() const;//автор
	char* get_Style() const;//жанр

	void set_Name(char*);//доступ к названию
	void set_Price(char*);//к цене
	void set_Descript(char*);//описание, доступ к аннотации,предназначению и назначению(канцел€ри€)
	void set_Year(char*);//год выпуска
	void set_Amount(char*);//объем страниц
	void set_Auhtor(char*);//автор
	void set_Style(char*);//жанр

	void print() const;//вывод на экран
	void out_file() const;//вывод в файл

	~Book();
};
#pragma once
