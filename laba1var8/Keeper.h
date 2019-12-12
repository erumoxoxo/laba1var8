#pragma once
#include "Market.h" 
#include <iostream>

class Keeper
{
private:
	class Node//������� ������ "������ + ��������� �� ���������"
	{
	public:
		Node * pNext_;//��������� 
		Market* data_;//������
		Node(Market* data, Node* pNext = nullptr) : data_(data), pNext_(pNext) {}
	};

	Node *head_;
	int size_;


public:
	Keeper();//�����������
	void push_back(Market* data);//���������� ��������
	void save_file();//������ � �����
	bool load_file();//������ ������
	void pop_front();//�������� �������
	void delet(int num);//�������� �� �������
	Market* get_data(int index);//������� ������ �� �������
	int get_Size() { return size_; };//������� ���������� ���������
	friend std::ostream &operator<< (std::ostream &o, const Keeper &obj);//����� �� �����, ���������� <<
	void clear();//������� ������
	~Keeper();
};
#pragma once
