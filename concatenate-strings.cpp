#include <iostream>
#include <string>
using namespace std;

int main()
    {
        string fname = "Nishant";
        string lname = "Sapkota";
        //string fullname = fname.append(lname); //method 1
        //string fullname = fname + lname; Method 2 Adding Space after FirstName
        string fullname = fname + " " + lname;// Method 3 -Adding " " in cout
        cout << fullname << endl;
        return 0;
    }