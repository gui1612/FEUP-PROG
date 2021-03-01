#include <iostream>
#include <cmath>
#include <iomanip>
//# define PI           3.14159265358979323846  /* pi */

using namespace std;

int main() {

    const int STEP = 15;
    const double PI = atan(1) * 4;
    
    float rad;

    cout << "ang\tsin\t\tcos\t\ttan" << endl;           // Header

    cout << fixed << setprecision(6);                   // Sets the fixed decimal places

    for (int i = 0; i  <= 90; i += STEP) {
        rad = i * PI / 180;                             // Converts the
        cout << i << "\t" << sin(rad) << "\t" << cos(rad) << "\t";

        if (i == 90)                                    // Checks if tan(i) is infinite (added 180 )
            cout << "infinite" << endl;
        else 
            cout << tan(rad) << endl;
    }

    return 0;
}