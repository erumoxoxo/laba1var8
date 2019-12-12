#include "Book.h"
#include "Textbook.h"
#include "Office.h"
#include "Keeper.h"
#include <fstream>
#include <cstring>

//конструктор по умолчанию
Keeper::Keeper()
{
	std::cout << "\nконструктор Keeper\n";
	size_ = 0;
	head_ = nullptr;
}

//добавление элемента в список
void Keeper::push_back(Market* data)
{
	if (head_ == nullptr)//если пусто, то делаем первым
	{
		head_ = new Node(data);
	}
	else//иначе ищем последний
	{
		Node *current = head_;

		while (current->pNext_ != 0)
			current = current->pNext_;

		current->pNext_ = new Node(data);
	}
	size_++;
}

void Keeper::delet(int num)//удаление элемента по номеру
{
	if (head_ == nullptr)
		return;
	int count = 0;
	Node *current = head_;
	Node *current_n = head_;
	if (num > size_)
		return;
	while (count != num - 1)
	{
		current = current_n;
		if (current->pNext_ != 0)
			current_n = current->pNext_;
		count++;

	}
	if (!current_n->pNext_)//если элемент последний в списке
	{
		current->pNext_ = nullptr;
		delete current_n;
	}
	else//если не последний
	{
		current->pNext_ = current_n->pNext_;
		delete current_n;
	}
	size_--;
}

bool Keeper::load_file()//чтение файлов
{
	using std::ifstream;
	ifstream file;
	bool pr = false;
	file.open(Book_file);
	if (file.is_open())
	{
		file.get();
		while (!file.eof())
		{
			char* name = new char[size_n_d];
			char* price = new char[size_pya];
			char* annotate = new char[size_n_d];
			char* year = new char[size_pya];
			char* amount = new char[size_pya];
			char* auhtor = new char[size_a];
			char* style = new char[size_a];

			file.getline(name, size_n_d);
			file.getline(price, size_pya);
			file.getline(annotate, size_n_d);
			file.getline(year, size_pya);
			file.getline(amount, size_pya);
			file.getline(auhtor, size_a);
			file.getline(style, size_a);

			Book* obj = new Book(name, price, annotate, year, amount, auhtor, style);
			push_back(obj);
			pr = true;
			delete[] name;
			delete[] price;
			delete[] annotate;
			delete[] year;
			delete[] amount;
			delete[] auhtor;
			delete[] style;
		}
	}
	file.close();

	file.open(Textbook_file);
	if (file.is_open())
	{
		file.get();
		while (!file.eof())
		{
			char* name = new char[size_n_d];
			char* price = new char[size_pya];
			char* institut = new char[size_n_d];
			char* year = new char[size_pya];
			char* amount = new char[size_pya];
			char* year_study = new char[size_pya];
			char* auhtor = new char[size_a];

			file.getline(name, size_n_d);
			file.getline(price, size_pya);
			file.getline(institut, size_n_d);
			file.getline(year, size_pya);
			file.getline(amount, size_pya);
			file.getline(auhtor, size_a);
			file.getline(year_study, size_pya);

			Textbook* obj = new Textbook(name, price, institut, year, amount, year_study, auhtor);
			push_back(obj);
			pr = true;
			delete[] name;
			delete[] price;
			delete[] institut;
			delete[] year;
			delete[] amount;
			delete[] auhtor;
			delete[] year_study;
		}
	}
	file.close();

	file.open(Office_file);
	if (file.is_open())
	{
		file.get();
		while (!file.eof())
		{
			char* name = new char[size_n_d];
			char* price = new char[size_pya];
			char* mission = new char[size_n_d];
			char* color = new char[size_pya];

			file.getline(name, size_n_d);
			file.getline(price, size_pya);
			file.getline(mission, size_n_d);
			file.getline(color, size_pya);

			Office* obj = new Office(name, price, mission, color);
			push_back(obj);
			pr = true;
			delete[] name;
			delete[] price;
			delete[] mission;
			delete[] color;
		}
	}
	file.close();
	return pr;
}

void Keeper::save_file()//сохранение в файлах
{
	Node *current = head_;
	while (current)
	{
		current->data_->out_file();
		current = current->pNext_;
	}
}

//удаление первого элемента
void Keeper::pop_front()
{
	Node *temp = head_;
	//std::cout << "\npop_front\n";
	if (head_->pNext_ != nullptr)
		head_ = head_->pNext_;

	delete temp;
	size_--;
}

//очистка всего списка
void Keeper::clear()
{
	while (size_)
	{
		//std::cout << size_;
		pop_front();
	}
}

Market* Keeper::get_data(int index)//получение данных
{
	Node *current = head_;
	int count = 0;
	while (count != index)
	{
		current = current->pNext_;
		count++;
	}
	return current->data_;
}

std::ostream& operator<< (std::ostream& o, const Keeper& obj)//перегрузка вывода
{
	int count = 1;
	Keeper::Node *current = obj.head_;
	while (current != 0)
	{
		std::cout << count << ". " << std::endl;
		current->data_->print();
		std::cout << std::endl;
		current = current->pNext_;
		count++;
	}
	return o;
}

//деструктор
Keeper::~Keeper()
{
	std::cout << "\nДеструктор Keeper\n";
	clear();
}