#include <iostream>
using namespace std;
 
//Base Class : class One

class One
{
    private:
        int test1;
    public:
        void get_test1(int val_test1)
        {
            test1=val_test1;
        }
         
        void disp_test1(void)
        {
            cout << "Value of test1 is : " << test1 << endl;
        }
};
 
//Here Class two is base class for class three and Derived class for class one

class Two: public One
{
    private:
        int test2;
    public:
        //assign value of a from here
        void get_test2(int val_test1, int val_test2)
        {
            //assign value of a by calling function of class one
            get_test1(val_test1);   
            test2=val_test2;
        }
         
        void disp_test2(void)
        {
            //display value of test1
            disp_test1();
            cout << "Value of test2 is : " << test2 << endl;
        }
};
 
//Here class three is derived class and two is Base class
class Three: public Two
{
    private:
        int test3;
    public:
        //assign value for variables 
        void get_test3(int val_test1, int val_test2,int val_test3)
        {
            /* Multilevel Inheritance */
            
            get_test2(val_test1,val_test2); 
            test3=val_test3;
        }
         
        void disp_test3(void)
        {
            //display value of test1 and test2 using disp_test2()
            disp_test2();
            cout << "Value of test3 is : " << test3 << endl;
        }
};
 
int main()
{
    //create object of final class, which is Class Three
    
    Three obj3;  
    obj3.get_test3(111,222,333);
    obj3.disp_test3();
     
    return 0;
}

// Create a five level inheritance 
// Access the members of all the four previuos levels from the fifth level class 
// Access the members of all the three previuos levels from the fourth level class 
//  Access the members of all the two previuos levels from the third level class 
// check the reverse accessing is allowed 

// Perform the private inheritance and explore the limitations 

// use friend fucntions to overcome the limitations of private inheritance. 
