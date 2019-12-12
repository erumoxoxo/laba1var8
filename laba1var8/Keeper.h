#pragma once
#include "Market.h" 
#include <iostream>

class Keeper
{
private:
	class Node//элемент списка "данные + указатель на следующий"
	{
	public:
		Node * pNext_;//указатель 
		Market* data_;//данные
		Node(Market* data, Node* pNext = nullptr) : data_(data), pNext_(pNext) {}
	};

	Node *head_;
	int size_;


public:
	Keeper();//конструктор
	void push_back(Market* data);//добавление элемента
	void save_file();//запись в файлы
	bool load_file();//чтение файлов
	void pop_front();//удаление первого
	void delet(int num);//удаление по индексу
	Market* get_data(int index);//возврат данных по индексу
	int get_Size() { return size_; };//возврат количества элементов
	friend std::ostream &operator<< (std::ostream &o, const Keeper &obj);//вывод на экран, перегрузка <<
	void clear();//очистка списка
	~Keeper();
};
#pragma once
