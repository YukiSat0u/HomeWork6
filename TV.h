#pragma once

#include "Portable.h"
#include "Appliances.h"

class TV final : public Portable, Appliances
{
public:
	TV(double diagonal, int power);
	void Show() override;
};