#pragma once
#include<string>

#include <iostream>
using namespace std;
class Cperson
{

public:
	Cperson();
	~Cperson();
	virtual void input();

protected:
//private:/// ������� 
	string Name;
	int Year;

};


