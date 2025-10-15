#include <iostream>
using namespace std;

int main() {
    // Declare two integer variables for the angles
    int A, B;

    // Read the input values for angles A and B
    cin >> A >> B;

    // Calculate the third angle
    int C = 180 - A - B;

    // Output the third angle
    cout << C << endl;

    return 0;
}

