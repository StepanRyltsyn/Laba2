#include "Stack.h"



void Stack::push(double value)
{
	Node*el = new Node;//выделяем память
	el->data = value;//иницилизация зн нового эл
	if (stack == nullptr)
	{
		el->next = nullptr;
		stack = el;
	}
	else
	{
		el->next = stack;
		stack = el;
	}
}

double Stack::pop()
{
	int res = stack->data;
	Node*tmp = stack;
	stack = stack->next;
	delete tmp;
	return res;
}

Stack& Stack::operator++()
{
	Node*tmp = stack;
	while (tmp!=nullptr)
	{
		tmp->data+=0.5;
		tmp = tmp->next;
	}
	return *this;
}

Stack & Stack::operator--()
{
	Node*tmp = stack;
	while (tmp != nullptr)
	{
		tmp->data--;
		tmp = tmp->next;
	}
	return *this;
}

Stack::Stack()
{
	this->stack = nullptr;
}


Stack::~Stack()
{
}


