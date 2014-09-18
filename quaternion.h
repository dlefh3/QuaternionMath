#include <iostream>

using namespace std;

class quaternion{
private:
	double r,i,j,k; // r = real, i,j,k are imaginary parts
public:
	quaternion(double w, double x, double y, double z)
	{ r = w; i = x; j = y; k = z; };
	quaternion(double w) 
	{ r = w; i = 0; j = 0; k = 0; };
	quaternion( void ) 
	{ r = 0; i = 0; j = 0; k = 0; };
	
	quaternion operator+ (quaternion);
	quaternion operator- (quaternion);
	quaternion operator* (quaternion);
	quaternion operator/ (quaternion);
	
	friend ostream & operator<< (ostream &, quaternion);
	};
	
	ostream & operator<< (ostream &, quaternion);
