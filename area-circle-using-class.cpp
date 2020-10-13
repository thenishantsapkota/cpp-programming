#include <iostream>
using namespace std;

class areacircle
    {
        private:
        float radius,area,pi=3.1412;
        public:
        friend void area(areacircle);
    };
void area(areacircle a)
    {
        cout << "Enter Radius of Circle:";
        cin >> a.radius;
        a.area = a.pi*(a.radius)*(a.radius);
        cout << "The area of circle is "<< a.area <<endl;
    }
int main()
    {
        areacircle a;
        area(a);
    }