#pragma once

#include "IElec.h"

class Appliances : virtual public IElec
{
public:
	Appliances(int power);
	void Show() override;

protected:
	int _power;
};

class CoffeeMaker final : public Appliances
{
public:
	CoffeeMaker(int power, string type);
	void Show() override;

private:
	string _type;
};

class Washer final : public Appliances
{
public:
	Washer(int power, int spin);
	void Show() override;

private:
	int _spin;
};