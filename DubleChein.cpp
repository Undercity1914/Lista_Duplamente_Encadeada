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
	if (amount > 0)
	{
		if (amount == 1)
		{
			head = head->getNext();

			amount--;
		}
		else
		{
			head = head->getNext();
			head->setPrevious(NULL);
			amount--;
		}
	}
}

void DubleChein::insert(int n)
{
	if (n == 1)
		insert();

	else if (n == amount + 1)
	{
		Cachorro c;
		c.fill();
		Nodo* behind = this->getElement(n - 1);
		Nodo* newer = new Nodo(c);
		behind->setNext(newer);
		newer->setPrevious(behind);
		amount++;
	}

	else if (n < amount and n > 0)
	{
		Cachorro c;
		c.fill();
		Nodo* in = this->getElement(n);
		Nodo* newer = new Nodo(c);
		Nodo* previous = in->getPrevious();
		previous->setNext(newer);
		newer->setNext(in);
		in->setPrevious(newer);
		newer->setPrevious(previous);
		amount++;
	}

	else
		cout << "Not possible to put the item " << n - amount << " positions ahead." << endl;
}

void DubleChein::remove(int n)
{
	if (n < amount and n > 0)
	{
		Nodo* out = this->getElement(n);
		Nodo* behind = out->getPrevious();
		out->getNext()->setPrevious(behind);
		behind->setNext(out->getNext());
		amount--;
	}
	else
		cout << "Don't exist this position.\n" << endl;
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

void DubleChein::print()
{
	Nodo* p = head;
	for (int i = 0; i < amount; i++)
	{
		if (p->getNext() != NULL)
		{
			p->getItem().print();
			p = p->getNext();
		}
		else
			p->getItem().print();
	}
}
