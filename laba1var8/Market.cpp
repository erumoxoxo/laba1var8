#include "Market.h"

//��� ��� � ���������� ��� ������ �����, � ���� � ��������� ��� ����
//�� ��������� �� � �������� ������,  ����� ����� ���� ��� ������������
//����� �������� ������
/*char* Market::get_Year() const //��� �������
{
char* n = "mmm";
return n;
}

char* Market::get_Amount() const //����� �������
{
return "--";
}

char* Market::get_Auhtor() const //�����
{
return "--";
}*/

void Market::set_Year(char* str)//��� �������
{
	delete[] str;
}

void Market::set_Amount(char* str)//����� �������
{
	delete[] str;
}

void Market::set_Auhtor(char* str)//�����
{
	delete[] str;
}