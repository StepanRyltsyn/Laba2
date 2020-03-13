#include "Long.h"



Long Long::operator+(const Long l)
{
	return Long(this->n+l.n);
}

Long Long::operator/(const Long l)
{
	return Long(this->n/l.n);
}

Long::Long(int n)
{
	this->n = n;
}


Long::~Long()
{
}

Long operator-(Long & t, const Long l)
{
	return Long(t.n-l.n);
}

Long operator*(Long & t, const Long l)
{
	return Long(t.n*l.n);
}
