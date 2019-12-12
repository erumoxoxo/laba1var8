#include "Market.h"

#pragma once
const char* const Office_file = "Office.txt";

class Office : public Market
{
private:
	char* name_;//��������
	char* price_;//����
	char* mission_;//����������
	char* color_;//����

	void copy(char*, char*, int);//������� ����������� ����� � ������������ � � set_.. ;

public:
	Office();
	Office(char* name, char* price, char* mission, char* color);
	Office(const Office& obj);

	char* get_Name() const;//������ � ��������
	char* get_Price() const;//� ����
	char* get_Descript() const;//��������, ������ � ���������,�������������� � ����������(����������)
	char* get_Color() const;//����

	void set_Name(char*);//������ � ��������
	void set_Price(char*);//� ����
	void set_Descript(char*);//��������, ������ � ���������,�������������� � ����������(����������)
	void set_Color(char*);//����

	void print() const;//����� �� �����
	void out_file() const;//����� � ����

	~Office();
};
