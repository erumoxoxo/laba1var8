#pragma once
#include "Market.h"
class Office : public Market
{
private:
	char* name_;//название
	char* price_;//цена
	char* mission_;//назначение
	char* color_;//цвет

	void copy(char*, char*, int);//функци€ копировани€ полей в конструкторе и в set_.. ;

public:
	Office();
	Office(char* name, char* price, char* mission, char* color);
	Office(const Office& obj);

	char* get_Name() const;//доступ к названию
	char* get_Price() const;//к цене
	char* get_Mission() const;//описание, доступ к аннотации,предназначению и назначению(канцел€ри€)
	char* get_Color() const;//цвет

	void set_Name(char*);//доступ к названию
	void set_Price(char*);//к цене
	void set_Mission(char*);//описание, доступ к аннотации,предназначению и назначению(канцел€ри€)
	void set_Color(char*);//цвет

	void print() const;//вывод на экран
	void out_file() const;//вывод в файл

	~Office();
};

