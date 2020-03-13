#pragma once
struct Node
{
	double data;
	Node *next;
};
class Stack
{
private:
	Node*stack;
public:
	void push(double value);
	double pop();
	Stack& operator++();//постфиксный
	Stack& operator--();//
	friend Stack operator++(Stack& st, int n);//префиксный++
	friend double operator--(Stack& st, int n);//префиксный--
	Stack();
	~Stack();
};


