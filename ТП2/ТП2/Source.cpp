#include <iostream>
#include "Long.h"
using namespace std;
Stack operator++(Stack& st, int n)
{
	//Stack st = this;//
	//this->push(n.data);
	int f = 0;
	f++;
	return st;
}

double operator--(Stack& st, int n)
{
	return st.pop();
}
int main()
{
	Long l(14);
	Long l2(7);
	Long l3 = l * l2;
	system("pause");
}