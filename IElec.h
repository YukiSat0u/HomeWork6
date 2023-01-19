#pragma once

#include<iostream>
#include<string>

using namespace std;

class IElec
{
public:
	virtual void Show() = 0
	{
		cout << "Device item" << endl;
	}
	virtual ~IElec() = default;
};