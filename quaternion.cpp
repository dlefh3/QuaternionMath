#include "quaternion.h"
#include <iostream>

quaternion quaternion::operator+ (quaternion q)
{
	quaternion temp;
	temp.r = r + q.r;
	temp.i = i + q.i;
	temp.j = j + q.j;
	temp.k = k + q.k;
	return temp;
}

quaternion quaternion::operator- (quaternion q)
{
	quaternion temp;
	temp.r = r - q.r;
	temp.i = i - q.i;
	temp.j = j - q.j;
	temp.k = k - q.k;
	return temp;
}

quaternion quaternion::operator* (quaternion q)
{
	quaternion temp;
	
	temp.r = (r * q.r) - (i * q.i) - (j * q.j) - (k * q.k);
	temp.i = (r * q.i) + (i * q.r) + (j * q.k) - (k * q.j);
	temp.j = (r * q.j) - (i * q.k) + (j * q.r) + (k * q.i);
	temp.k = (r * q.k) + (i * q.j) - (j * q.i) + (k * q.r);
	
	return temp;
}

quaternion quaternion::operator/ (quaternion q)
{
	quaternion temp;
	
	double denom;
	denom = (q.r * q.r) + (q.i * q.i) + (q.j * q.j) + (q.k * q.k);
	
	q.i *= -1;
	q.j *= -1;
	q.k *= -1;
	
	temp.r = ((r * q.r) - (i * q.i) - (j * q.j) - (k * q.k)) / denom;
	temp.i = ((r * q.i) + (i * q.r) + (j * q.k) - (k * q.j)) / denom;
	temp.j = ((r * q.j) - (i * q.k) + (j * q.r) + (k * q.i)) / denom;
	temp.k = ((r * q.k) + (i * q.j) - (j * q.i) + (k * q.r)) / denom;
	

	return temp;
}

ostream & operator<< (ostream & s, quaternion q)
{
	s << q.r << "+" << q.i << "i+" << q.j << "j+" << q.k << "k";
	return s;
}
