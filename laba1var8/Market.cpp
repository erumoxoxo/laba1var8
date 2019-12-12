#include "Market.h"

//так как у канцел€рии нет данных полей, а книг и учебников они есть
//то реализуем их в исходном классе,  чтобы можно было все обрабатывать
//одним массивом данных
/*char* Market::get_Year() const //год выпуска
{
	return "--";
}

char* Market::get_Amount() const //объем страниц
{
	return "--";
}

char* Market::get_Auhtor() const //автор
{
	return "--";
}*/

void Market::set_Year(char* str)//год выпуска
{
	delete[] str;
}

void Market::set_Amount(char* str)//объем страниц
{
	delete[] str;
}

void Market::set_Auhtor(char* str)//автор
{
	delete[] str;
}