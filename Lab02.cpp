/*************************
 * Name:    Katkov Stepan*
 * Project: Lab02        *
 * Var 8                 *
 * ***********************/
 
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    
    double R, n, T, V1;
    
    cout << "R =";
    cin  >> R;
    cout << "n =";
    cin  >> n;
    cout << "T =";
    cin  >> T;
    cout << "V1 =";
    cin  >> V1;
    
    double V2_values[] = {2.2, 2.4, 2.6, 2.8, 3.0, 4.0, 5.0, 6.0, 7.0};
    int num_points = sizeof(V2_values) / sizeof (V2_values[0]);
    
    cout << fixed << setprecision(3);
    cout << setw(8) << "V2" << setw(12) << "A1" << setw(12) << "A2" << endl;
        
    for (int i = 0; i < num_points; i++) {
        double V2 = V2_values[i];
        
        double A1 = R * T * log(V2 / V1);
        
        double A2 = (R * T / (n - 1)) * (1 - pow(V1 / V2, n - 1));
        
        cout << setw(8) << V2 << setw(12) << A1 << setw(12) << A2 << endl;
    }
	
    return 0;
}