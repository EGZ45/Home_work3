#include "Person.h"

string Person::GetName()
{
	return _name;
}

void Person::SetName(string name)
{
	_name = name;
}

string Person::InputName()
{
	cout << "Введите имя:\t";
	cin >> _name;
	return _name;
}

string Person::GetLastName()
{
	return _lastName;
}

void Person::SetLastName(string lname)
{
	_lastName = lname;
}

string Person::InputLastName()
{
	cout << "Введите фамилию:\t";
	cin >> _lastName;
	return _lastName;
}

int Person::GetAge()
{
	return _age;
}

void Person::SetAge(int age)
{
	_age = age;
}

int Person::InputAge()
{
	cout << "Сколько вам полных лет:\t";
	cin >> _age;
	return _age;
}

string Person::GetGender()
{
	return _gender;
}

void Person::SetGender(string gender)
{
	_gender = gender;
}

string Person::InputGender()
{
	cout << "Ваш пол:\t";
	cin >> _gender;
	return _gender;
}

string Person::GetNumber()
{
	return _telNumber;
}

void Person::SetNumber(string number)
{
	_telNumber = number;
}

string Person::InputNumber()
{
	cout << "Ваш номер телефона: ";
	cin >> _telNumber;
	return _telNumber;
}

void Person::Print()
{
	cout << endl << "===================================\n";
	cout << "Имя:\t\t\t" << _name << "\n"
		<< "Фамилия:\t\t" << _lastName << "\n"
		<< "Возвраст:\t\t" << _age << "\n"
		<< "Пол:\t\t\t" << _gender << "\n"
		<< "Телефонный номер:\t" << _telNumber
		<< endl << endl;
}
