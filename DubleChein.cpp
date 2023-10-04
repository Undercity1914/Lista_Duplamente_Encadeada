#include "DubleChein.h"

DubleChein::DubleChein()
{
	amount = 0;
	head = NULL;
}

void DubleChein::insert()
{
	Cachorro c;
	c.fill();
	Nodo* newer = new Nodo(c);
	newer->setNext(head);
	if (head != NULL)
	{
		Nodo* next = newer->getNext();
		next->setPrevious(newer);
	}
	head = newer;
	amount++;
}

void DubleChein::remove()
{
	head = head->getNext();
	head->setPrevious(NULL);
	amount--;
}

void DubleChein::insert(int n)
{
	Cachorro c;
	c.fill();
	Nodo* newer = new Nodo(c);
	Nodo* previous = this->getElement(n - 1);
	newer->setNext(previous->getNext());
	newer->setPrevious(previous);
	previous->getNext()->setPrevious(newer);
	previous->setNext(newer);

	amount++;
}

void DubleChein::remove(int n)
{
	Nodo* previous = this->getElement(n - 1);
	Nodo* out = previous->getNext();
	out->getNext()->setPrevious(previous);
	previous->setNext(out->getNext());
	
	amount--;
}

Nodo* DubleChein::getElement(int n)
{
	Nodo* p = head;
	int i = 1;
	while (i < n and p->getNext() != NULL)
	{
		p = p->getNext();
		i++;
	}

	if (i == n)
		return p;
	else
		return NULL;
}