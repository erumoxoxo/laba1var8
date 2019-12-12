#pragma once
#include "Market.h"

class Textbook : public Market
{
private:
	char* name_;//��������
	char* price_;//����
	char* institut_;//������� ���������
	char* year_;//��� �������
	char* amount_;//���������� �������
	char* year_study_;//��� ��������
	char* auhtor_;//����

	void copy(char*, char*, int);//������� ����������� ����� � ������������ � � set_.. ;

public:
	Textbook();
	Textbook(char* name, char* price, char* institut, char* year, char* amount, char* auhtor, char* year_study);
	Textbook(const Textbook& obj);

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
	void set_Year_study(char*);//��� ��������

	void print() const;//����� �� �����
	void out_file() const;//����� � ����

	~Textbook();
};
