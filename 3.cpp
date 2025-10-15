#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  // Read the number of test cases

    // Loop through all test cases
    while (T--) {
        int N, K;
        cin >> N >> K;  // Read the number of episodes and the duration of each episode in minutes
        
        // Calculate total time in minutes
        int totalMinutes = N * K;
        
        // Convert total minutes to hours and remaining minutes
        int hours = totalMinutes / 60;
        int minutes = totalMinutes % 60;
        
        // Output the result in the format: H M
        cout << hours << " " << minutes << endl;
    }

    return 0;
}

