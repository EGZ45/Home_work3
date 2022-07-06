#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Person
{
private:
	string _name;
	string _lastName;
	int _age;
	string _gender;
	string _telNumber;
public:
	Person()
	{
		_name = "Evgeniy";
		_lastName = "Zarovskiy";
		_age = 34;
		_gender = "male";
		_telNumber = "+380633151017";
	}
	~Person()
	{

	}
	string GetName();
	void SetName(string name);
	string InputName();
	string GetLastName();
	void SetLastName(string lname);
	string InputLastName();
	int GetAge();
	void SetAge(int age);
	int InputAge();
	string GetGender();
	void SetGender(string gender);
	string InputGender();
	string GetNumber();
	void SetNumber(string number);
	string InputNumber();
	void Print();
};

