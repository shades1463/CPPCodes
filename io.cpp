#include <iostream>

using namespace std;
// Get two values , add and print the result 
// Get five values sequentially, store them in an array, sum them up, print the resultant sum

int main()

{
	int first_variable,second_variable;
	int i, sum=0, initial_values[10];
	cout << "Welcome to the wonderful world of CPP \n"; 									
	cout << "Enter the first number: ";
	cin >> first_variable;	
	cout << " The value of the first variable is : " << first_variable << "\n";
	cout << "Enter the second number: ";
	cin >> second_variable;	
	cout << " The value of the second variable is: " << second_variable << "\n";
	cout << " The sum of both the variables is : " << first_variable+second_variable << "\n";
	
	for(i=0;i<5;i++)
    {
        cout<<"\n Enter the initial values sequentially "<< i+1 <<": ";
        cin>>initial_values[i];
        sum+=initial_values[i];       
    }
	cout << "The sum of all the 5 initial values is : " << sum << "\n" ; 
	return 0;
}

// Define all the data types available in C and print the same
// Define all the data types available in C, get input from users, 
// store them in an array,  and print the sum of same 


