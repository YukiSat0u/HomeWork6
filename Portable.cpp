#include "Portable.h"

Portable::Portable(double diagonal) : _diagonal(diagonal)
{
}

void Portable::Show()
{
	cout << "��������� � ����������: " << _diagonal << " �����(��)" << endl;
}

Smartphone::Smartphone(double diagonal, string corps) : Portable(diagonal), _corps(corps)
{
}

void Smartphone::Show()
{
	cout << "��������� ��������: " << _diagonal << " �����(��)" << endl
		<< "������ ��������: " << _corps << endl;
}

Laptop::Laptop(double diagonal, int memory) : Portable(diagonal), _memory(memory)
{
}

void Laptop::Show()
{
	cout << "��������� ��������: " << _diagonal << " �����(��)" << endl
		<< "����������� ������: " << _memory << " ��" << endl;
}