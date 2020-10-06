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
//private:/// костыль 
	string Name;
	int Year;

};


