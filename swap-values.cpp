#include <iostream>
using namespace std;
void swap(int &x,int &y)
    {
        int z = x;
        x = y;
        y = z;
    }
int main()
    {
        int firstnum = 10;
        int secondnum = 20;
        cout << "Before Swap:" << endl;
        cout << firstnum << " " <<secondnum << endl;
        swap(firstnum,secondnum);
        cout << "After Swap:" << endl;
        cout << firstnum << " " << secondnum << endl;
        return 0;
    }