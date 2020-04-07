#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
using std::setw;
using std::setprecision;
using std::ios;
using std::endl;


const float Pi = 3.14;



int main()

{

    int radius,
   
     float area, circumfrence;
    cout << "Enter Radius of the circle:";

    cin >> radius;

    circumfrence = 2 * Pi * radius;

    cout << "Circumfrence of circle\n" << circumfrence;
    
    
    area = Pi * (radius * radius);
    cout << "Area of a circle:\n" << area;


    return 0;

}


