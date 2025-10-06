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
    const int firstIterationCount = 5;
    const double firstStartV2 = 2.2;
    const double firstStepSize = 0.2;
    const double secondStartV2 = 4.0;
    const double secondEndV2 = 7.0;
    const double secondStepSize = 1.0;
    const int v2Width = 8;
    const int aWidth = 12;
    const double degree = 1.0;

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
    cout << setw(v2Width) << "V2" << setw(aWidth) << "A1" << setw(aWidth) << "A2" << endl;
    cout << "----------------------------------------" << endl;

    double currentV2;
    int stepCounter;
    currentV2 = firstStartV2;
    stepCounter = 0;
    
    while (stepCounter < firstIterationCount) {
        double V2, volumeRatio, A1, A2;
        V2 = currentV2;
        volumeRatio = V2 / V1;
        A1 = R * T * log(volumeRatio);
        A2 = (R * T / (n - degree)) * (degree - pow(V1 / V2, n - degree));

        cout << setw(v2Width) << V2 << setw(aWidth) << A1 << setw(aWidth) << A2 << endl;
        
        currentV2 += firstStepSize;
        ++stepCounter;
    }
  
    double startV2, endV2, stepSize, volumeIterator;
    startV2 = secondStartV2;
    endV2 = secondEndV2;
    stepSize = secondStepSize;
    volumeIterator = startV2;
    
    do {
        double V2, volumeRatio, A1, A2;
        V2 = volumeIterator;
        volumeRatio = V2 / V1;
        A1 = R * T * log(volumeRatio);
        A2 = (R * T / (n - degree)) * (degree - pow(V1 / V2, n - degree));

        cout << setw(v2Width) << V2 << setw(aWidth) << A1 << setw(aWidth) << A2 << endl;
        
        volumeIterator += stepSize;
    } while (volumeIterator <= endV2);

    return 0;
}