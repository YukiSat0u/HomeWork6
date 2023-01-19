#include "Portable.h"

Portable::Portable(double diagonal) : _diagonal(diagonal)
{
}

void Portable::Show()
{
	cout << "Диагональ в устройстве: " << _diagonal << " дюйма(ов)" << endl;
}

Smartphone::Smartphone(double diagonal, string corps) : Portable(diagonal), _corps(corps)
{
}

void Smartphone::Show()
{
	cout << "Диагональ телефона: " << _diagonal << " дюйма(ов)" << endl
		<< "Корпус телефона: " << _corps << endl;
}

Laptop::Laptop(double diagonal, int memory) : Portable(diagonal), _memory(memory)
{
}

void Laptop::Show()
{
	cout << "Диагональ ноутбука: " << _diagonal << " дюйма(ов)" << endl
		<< "Оперативная память: " << _memory << " Гб" << endl;
}