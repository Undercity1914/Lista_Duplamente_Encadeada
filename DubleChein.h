#include"Nodo.h"

#pragma once
class DubleChein
{
public:
	DubleChein();

	void insert();
	void remove();

	void insert(int n);
	void remove(int n);

	Nodo* getElement(int n);

private:
	int amount;
	Nodo* head;
};

