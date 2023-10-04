#include<string>
#include<iostream>

using namespace std;

#pragma once
class Cachorro
{
public:
	Cachorro();

	string getName();
	int getAge();

	void setName(string name);
	void setAge(int age);

	void fill();
	void print();

	void copy(Cachorro other);
	
private:
	string name;
	int age;
};

