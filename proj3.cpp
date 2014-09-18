#include "quaternion.h"

int main (int argc, char *argv[])
{
	quaternion 
				a = quaternion (1), 
				b = quaternion (2, 5, 3.2, -2.15), 
				c = quaternion (0, -2.1, -0.34, 1.035);

	cout << "a " << a << "  b " << b << "  c " << c << endl;
	cout << "b+c: " << b + c << endl;
	cout << "c-b: " << c - b << endl;
	cout << "b*c: " << b * c << endl;
	cout << "c*b: " << c * b << endl;
	quaternion d = b / c;
	cout << "b/c: " << d << " (and ans * c: " << d * c << ")\n";
	cout << "Mess: " << a + b / c - (b-a) / (a + c) << endl; 

	return 0;
}
