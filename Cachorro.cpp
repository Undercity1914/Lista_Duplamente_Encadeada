#include "Cachorro.h"

Cachorro::Cachorro()
{
	name = "";
	age = 0;
}

string Cachorro::getName()
{
	return this->name;
}

int Cachorro::getAge()
{
	return this->age;
}

void Cachorro::setName(string name)
{
	this->name = name;
}

void Cachorro::setAge(int age)
{
	this->age = age;
}

void Cachorro::fill()
{
	cout << "-------------------------Filling--------------------------\n" << endl;

	cout << "Name: ";
	cin >> this->name;
	cout << "Age: ";
	cin >> this->age;

	cout << "\n-----------------------End of Filling------------------------\n" << endl;
}

void Cachorro::print()
{
	cout << "---------------------------Print-------------------------------\n" << endl;

	cout << "Name: " << this->name << endl;
	cout << "Age: " << this->age << endl;

	cout << "\n---------------------End of Print-------------------------\n" << endl;
}

void Cachorro::copy(Cachorro other)
{
	this->name = other.getName();
	this->age = other.getAge();
}

