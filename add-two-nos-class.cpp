#include <iostream>
using namespace std;

class add 
    {
        public:
        int num1,num2,num3;
    };

int main()
    {
        add obj1;
        cout << "Enter 1st Number:";
        cin >> obj1.num1;
        cout << "Enter 2nd Number:";
        cin >> obj1.num2;
        obj1.num3 = obj1.num1 + obj1.num2 ;
        cout << "The Addition of "<< obj1.num1 << " and " << obj1.num2 <<" is " << obj1.num3 <<endl;
    }