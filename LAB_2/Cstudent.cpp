#include "Cstudent.h"

Cstudent::Cstudent()
{
}

Cstudent::~Cstudent()
{
}

void Cstudent::input()
{
	cout << "\nInput Name->";
	cin >> this->Name;
	cout << "\nInput Year->";
	cin >> this->Year;
	cout << "\nInput Faculty->";
	cin >> this->Faculty;
	cout << "\nInput GroupNumber->";
	cin >> this->GroupNumber;
}

void Cstudent::input_stud()/// костыль 
{
	input();
	cout << "\nInput Faculty->";
	cin >> this->Faculty;
	cout << "\nInput GroupNumber->";
	cin >> this->GroupNumber;
}

void Cstudent::PrintInfo()
{
	cout << "\nStudent Name->" << this->Name
		<< "\nStudent Year->"<< this->Year
		<< "\nStudent Faculty->"<<this->Faculty
		<< "\nStudent GroupNumber->"<< this->GroupNumber;
}
