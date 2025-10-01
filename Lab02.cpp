/*************************
 * Name:    Katkov Stepan*
 * Project: Lab02        *
 * Var 8                 *
 *************************/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double R, n, T, V1;

    cout << "R = ";
    cin >> R;
    cout << "n = ";
    cin >> n;
    cout << "T = ";
    cin >> T;
    cout << "V1 = ";
    cin >> V1;

    cout << fixed << setprecision(3);
    cout << setw(8) << "V2" << setw(12) << "A1" << setw(12) << "A2" << endl;
    cout << "----------------------------------------" << endl;

    double currentV2 = 2.2;
    int stepCounter = 0;
    
    while (stepCounter < 5) {
        double V2 = currentV2;
        double volumeRatio = V2 / V1;
        
        double A1 = R * T * log(volumeRatio);
        double A2 = (R * T / (n - 1.0)) * (1.0 - pow(V1 / V2, n - 1.0));

        cout << setw(8) << V2 << setw(12) << A1 << setw(12) << A2 << endl;
        
        currentV2 += 0.2;
        stepCounter++;
    }

    double startV2 = 4.0;
    double endV2 = 7.0;
    double stepSize = 1.0;
    double volumeIterator = startV2;
    
    do {
        double V2 = volumeIterator;
        double volumeRatio = V2 / V1;
        
        double A1 = R * T * log(volumeRatio);
        double A2 = (R * T / (n - 1.0)) * (1.0 - pow(V1 / V2, n - 1.0));

        cout << setw(8) << V2 << setw(12) << A1 << setw(12) << A2 << endl;
        
        volumeIterator += stepSize;
    } while (volumeIterator <= endV2);

    return 0;
}
