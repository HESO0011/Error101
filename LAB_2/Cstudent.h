#pragma once
#include "Cperson.h"
class Cstudent :public Cperson
{
public:
	Cstudent();
	~Cstudent();
	 void input()override;
	 void input_stud();
	 void PrintInfo();

	
private:
	string Faculty;
	int GroupNumber;

};

