
//CPP Program to demonstrate the use of friend functions

#include<iostream>
using namespace std;
class Cars
{
	private: 
		int height;
	public:
		Cars()
		{
			height = 0;
		}
		void displayHeight()
		{
			cout<< "The height of the Car is" <<height << "\n";
		}
		friend void changeHeight(Cars &h);
};

void changeHeight(Cars &h)
{
	h.height = h.height +10;
}

int main()
{
Cars h1;
h1.displayHeight();
changeHeight(h1);
h1.displayHeight();
return(0);
}


// Define a class called store, 
// display the number of items in the first three stores using base class object 
// display the number of items in the next two stores using friend function

