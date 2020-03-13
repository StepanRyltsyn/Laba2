#pragma once
class Long
{
private:
	int n;
public:
	Long operator+(const Long l);
	friend Long operator-(Long& t, const Long l);
	Long operator/(const Long l);
	friend Long operator*(Long& t, const Long l);
	Long(int n);
	~Long();
};

