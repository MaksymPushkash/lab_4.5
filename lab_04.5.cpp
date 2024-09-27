#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main() {
    double x, y, R;
    cout << "R: ";
    cin >> R;

    srand((unsigned) time(NULL)); 

    
    for (int i = 0; i < 10; i++) {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;

        
        if (x >= 0 && y >= 0 && (x * x + y * y <= R * R)) {
            cout << "yes" << endl;
        }
        
        else if (x <= 0 && y <= 0 && (y >= -2 * x - R)) {
            cout << "yes" << endl;
        }
        
        else if (x <= 0 && y >= 0 && x >= -R && y <= R) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }

    cout << endl << fixed;

    
    for (int i = 0; i < 10; i++) {
        x = 2.0 * R * rand() / RAND_MAX - R;
        y = 2.0 * R * rand() / RAND_MAX - R;

        
        if (x >= 0 && y >= 0 && (x * x + y * y <= R * R)) {
            cout << setw(8) << setprecision(4) << x << " "
                 << setw(8) << setprecision(4) << y << " " << "yes" << endl;
        }
        
        else if (x <= 0 && y <= 0 && (y >= -2 * x - R)) {
            cout << setw(8) << setprecision(4) << x << " "
                 << setw(8) << setprecision(4) << y << " " << "yes" << endl;
        }
        
        else if (x <= 0 && y >= 0 && x >= -R && y <= R) {
            cout << setw(8) << setprecision(4) << x << " "
                 << setw(8) << setprecision(4) << y << " " << "yes" << endl;
        }
        else {
            cout << setw(8) << setprecision(4) << x << " "
                 << setw(8) << setprecision(4) << y << " " << "no" << endl;
        }
    }

    return 0;
}


