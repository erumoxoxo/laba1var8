#pragma once
#include "Market.h"

class Textbook : public Market
{
private:
	char* name_;//название
	char* price_;//цена
	char* institut_;//учебное заведение
	char* year_;//год выпуска
	char* amount_;//количество страниц
	char* year_study_;//год обучени€
	char* auhtor_;//жанр

	void copy(char*, char*, int);//функци€ копировани€ полей в конструкторе и в set_.. ;

public:
	Textbook();
	Textbook(char* name, char* price, char* institut, char* year, char* amount, char* auhtor, char* year_study);
	Textbook(const Textbook& obj);

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
	void set_Year_study(char*);//год обучени€

	void print() const;//вывод на экран
	void out_file() const;//вывод в файл

	~Textbook();
};
