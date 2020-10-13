#include <iostream>
using namespace std;

class maxnum
    {
        private:
        int a,b;
        public:
        friend void max(maxnum);
    };
void max (maxnum m)
    {
        cout << "Enter Two Numbers:";
        cin >> m.a>> m.b;
        if(m.a > m.b)
            {
                cout << m.a << " is greater."<<endl;
            }
        else
            {
                cout << m.b << " is greater."<<endl;
            }
    }
int main()
    {
        maxnum m;
        max(m);
    }