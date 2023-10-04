#include"Cachorro.h"

#pragma once
class Nodo
{
public:
	Nodo();
	Nodo(Cachorro item);

	Cachorro getItem();
	Nodo* getNext();
	Nodo* getPrevious();

	void setItem(Cachorro item);
	void setNext(Nodo* next);
	void setPrevious(Nodo* previous);

private:
	Cachorro item;
	Nodo* next;
	Nodo* previous;
};

