// program to demonstrate the single inheritance 

#include <iostream>
using namespace std;
// Base class
class VIT_Student
{
protected:
  int DA_marks;
  int project_marks;
public:
  void setDAMarks(int dm) 
  {     DA_marks = dm;   }
  void setProjectMarks(int pm) 
  {     project_marks = pm;	 }
};

// Derived class
class CSEStudent: public VIT_Student
{
  public:
  int getMarks() { 
    return (DA_marks+project_marks); 
  }
};

int main(void) {
  CSEStudent Ram;
  Ram.setDAMarks(25);
  Ram.setProjectMarks(98);  
  cout << "Total Marks: " << Ram.getMarks() << " out of 130 " << endl;

  return 0;
}

// Define a class called main store 
// Access the main store class elements using the second store class elements 
// Perform the private inheritance and explore the limitations 
// use friend fucntions to overcome the limitations of private inheritance. 
