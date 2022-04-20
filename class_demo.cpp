//demonstration of class
#include <iostream>
using namespace std;

class House // Define a class using the keyword "class"
{
	int xLength;
	int yBreadth;
	
	public: // Public, Private and Protected
		void setDimensions(int,int); 		
		int area()
		{ 
			return(xLength * yBreadth);
				}
		
};
// :: --> Scope Resolution Operator 
void House::setDimensions(int a, int b) 
// Function definition outside the class using the class name and function name separated 
// by scope resolution operator
{
	xLength = a;
	yBreadth = b;
}

int main()
{
	House h1,h2,h3; // h1, h2 and h3 are the objects of the class House
	h1.setDimensions(2000,2000);
	h2.setDimensions(2000,3000);
	h3.setDimensions(2000,4000);
	cout << "Area of House 1:" << h1.area() << "\n";
	cout << "Area of House 2:" << h2.area() << "\n";
	cout << "Area of House 3:" << h3.area() << "\n";
	return 0;
}


