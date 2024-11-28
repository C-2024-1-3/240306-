#include <iostream>
#include <iomanip>
#include "mytemperature.h" 
using namespace std;
int main() 
{
    double f2 = 120.0;
    cout << fixed << setprecision(2);
    cout << "Celsius    Fahrenheit   |   Fahrenheit       Celsius" << endl;
    for (double c1 = 40.0;c1 >= 31.0;c1-=1) 
    {
        double f1 = celsius_to_fah(c1);
        cout << setw(5) << c1 << "       "
             << setw(7) << f1 << "     |  ";
        for (f2;f2>=30;f2-=10)
        {             
            double c2 = fahrenheit_to_cels(f2);
            cout << setw(9) << f2 << "   "
                 << setw(11) << c2 << "   " << endl;
            f2 -= 10;
            break;
        }
      
    }

    return 0;
}
