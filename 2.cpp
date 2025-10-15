#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;  // Read the number of test cases

    // Process each test case
    while (T--) {
        int N, M;
        cin >> N >> M;  // Read the total number of matches and the number of already played matches
        string S;
        cin >> S;  // Read the results of the already played matches

        // Count Alice's and Bob's wins
        int count_1 = 0;  // Alice's wins
        int count_0 = 0;  // Bob's wins

        // Count the number of wins for Alice and Bob
        for (char c : S) {
            if (c == '1') {
                count_1++;
            } else {
                count_0++;
            }
        }

        // The remaining matches
        int remaining_matches = N - M;

        // Check if a tie is still possible
        if (abs(count_1 - count_0) <= remaining_matches) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}

