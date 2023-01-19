#pragma once

#include "IElec.h"

class Portable : virtual public IElec
{
public:
	Portable(double diagonal);
	void Show() override;

protected:
	double _diagonal;
};

class Smartphone final : public Portable
{
public:
	Smartphone(double diagonal, string corps);
	void Show() override;

private:
	string _corps;
};

class Laptop final : public Portable
{
public:
	Laptop(double diagonal, int memory);
	void Show() override;

private:
	int _memory;
};