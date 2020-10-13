#include <iostream>
using namespace std;

 class Operation
            {
                public:
                int a,b;
                int getnumbers()
                    {
                        cout << "Enter Two Numbers:";
                        cin >> a >>b;
                    }
                int agreater()
                    {
                        cout <<"The greater number is " << a;
                    }
                 int bgreater()
                    {
                        cout <<"The greater number is " << b;
                    }
            };

int main ()
    {
        Operation obj1;
        obj1.getnumbers();
        if (obj1.a > obj1.b)
            {
                obj1.agreater();
            }
        else
            {
                obj1.bgreater();
            }
    }