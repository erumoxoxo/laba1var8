#pragma once
const int size_n_d = 70;//������ �����: �������� � ��������
const int size_pya = 10;//����� �����: ����, ��� �������, ��������
const int size_a = 20;//����� �����: ����, �����, ����;

class Market
{
public:
	virtual char* get_Name() const = 0;//������ � ��������
	virtual char* get_Price() const = 0;//� ����
	virtual char* get_Descript() const = 0;//��������, ������ � ���������,�������������� � ����������(����������)
	//virtual char* get_Year() const;//��� �������
	//virtual char* get_Amount() const;//����� �������
	//virtual char* get_Auhtor() const;//�����

	virtual void set_Name(char*) = 0;//������ � ��������
	virtual void set_Price(char*) = 0;//� ����
	virtual void set_Descript(char*) = 0;//��������, ������ � ���������,�������������� � ����������(����������)
	virtual void set_Year(char*);//��� �������
	virtual void set_Amount(char*);//����� �������
	virtual void set_Auhtor(char*);//�����

	virtual void print() const = 0;//����� �� �����
	virtual void out_file() const = 0;//����� � ����
	virtual ~Market() {};
};

