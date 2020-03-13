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
	Stack& operator++();//�����������
	Stack& operator--();//
	friend Stack operator++(Stack& st, int n);//����������++
	friend double operator--(Stack& st, int n);//����������--
	Stack();
	~Stack();
};


