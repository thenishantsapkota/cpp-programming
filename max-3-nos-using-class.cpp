#include <iostream>
using namespace std;

class Operations
    {
        public:
        int a,b,c;
         int getnumbers()
                    {
                        cout << "Enter Three Numbers:";
                        cin >> a >>b >> c;
                    }
                int agreater()
                    {
                        cout <<"The greater number is " << a;
                    }
                int bgreater()
                    {
                        cout <<"The greater number is " << b;
                    }
                int cgreater()
                    {
                        cout << "The greater number is "<< c;
                    }
            };
int main()
    {
        Operations obj1;
        obj1.getnumbers();
        if (obj1.a > obj1.b and obj1.a > obj1.c)
            {
                obj1.agreater();
            }
        else if (obj1.b > obj1.c)
            {
                obj1.bgreater();
            }
        else
            {
                obj1.cgreater();
            }
    }