#include "Nodo.h"

Nodo::Nodo()
{
	next = NULL;
	previous = NULL;
}

Nodo::Nodo(Cachorro item)
{
	this->item = item;
	this->next = NULL;
	this->previous = NULL;
}

Cachorro Nodo::getItem()
{
	return this->item;
}

Nodo* Nodo::getNext()
{
	return this->next;
}

Nodo* Nodo::getPrevious()
{
	return this->previous;
}

void Nodo::setItem(Cachorro item)
{
	this->item = item;
}

void Nodo::setNext(Nodo* next)
{
	this->next = next;
}

void Nodo::setPrevious(Nodo* previous)
{
	this->previous = previous;
}

