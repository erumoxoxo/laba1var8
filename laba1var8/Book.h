#pragma once
#include "Market.h"

class Book : public Market
{

private:
	char* name_;//��������
	char* price_;//����
	char* annotate_;//���������
	char* year_;//��� �������
	char* amount_;//���������� �������
	char* auhtor_;//�����
	char* style_;//����

	void copy(char*, char*, int);//������� ����������� ����� � ������������ � � set_.. ;

public:
	Book();
	Book(char* name, char* price, char* annotate, char* year, char* amount, char* auhtor, char* style);
	Book(const Book& obj);

	char* get_Name() const;//������ � ��������
	char* get_Price() const;//� ����
	char* get_Descript() const;//��������, ������ � ���������,�������������� � ����������(����������)
	char* get_Year() const;//��� �������
	char* get_Amount() const;//����� �������
	char* get_Auhtor() const;//�����
	char* get_Style() const;//����

	void set_Name(char*);//������ � ��������
	void set_Price(char*);//� ����
	void set_Descript(char*);//��������, ������ � ���������,�������������� � ����������(����������)
	void set_Year(char*);//��� �������
	void set_Amount(char*);//����� �������
	void set_Auhtor(char*);//�����
	void set_Style(char*);//����

	void print() const;//����� �� �����
	void out_file() const;//����� � ����

	~Book();
};
#pragma once
