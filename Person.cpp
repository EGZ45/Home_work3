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
	cout << "������� ���:\t";
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
	cout << "������� �������:\t";
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
	cout << "������� ��� ������ ���:\t";
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
	cout << "��� ���:\t";
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
	cout << "��� ����� ��������: ";
	cin >> _telNumber;
	return _telNumber;
}

void Person::Print()
{
	cout << endl << "===================================\n";
	cout << "���:\t\t\t" << _name << "\n"
		<< "�������:\t\t" << _lastName << "\n"
		<< "��������:\t\t" << _age << "\n"
		<< "���:\t\t\t" << _gender << "\n"
		<< "���������� �����:\t" << _telNumber
		<< endl << endl;
}
