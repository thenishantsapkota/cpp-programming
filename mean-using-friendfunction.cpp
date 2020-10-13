#include <iostream>
using namespace std;

class mean
    {
        private:
        float x,y,z;
        friend int avg(mean);
    };
int avg(mean m)
    {
        cout <<"Enter values of x and y:";
        cin >> m.x>>m.y;
        m.z = (m.x+m.y)/2;
        cout << "The Mean of x and y is "<< m.z<< endl;
    }
int main()
    {
        mean m;
        avg(m);
    }