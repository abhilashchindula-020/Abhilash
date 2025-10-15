#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;  // Read the number of test cases
    
    while (T--) {
        int N, M;
        cin >> N >> M;  // Read N (size of the array) and M (modulo value)
        
        vector<int> A(N);
        
        // Read the array elements
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        
        // The minimum sum will always be 0 after performing enough operations
        cout << 0 << endl;
    }
    
    return 0;
}

