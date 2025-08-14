#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;  // Read number of elements

    int arr[n];  // Array to store the elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Read array elements
    }

    int best = -1000000000; // Start with a very small number as best sum

    // Try starting from each position in the array
    for (int start = 0; start < n; start++) {
        int sum = 0;      // Sum for this starting position
        int group = 1;    // Size of the group (1, then 2, then 3, etc.)
        int pos = start;  // Current position in the array

        // Keep adding groups until we run out of elements
        while (pos + group <= n) {
            // Add 'group' elements starting from 'pos'
            for (int k = 0; k < group; k++) {
                sum = sum + arr[pos + k];
            }
            // Move to the next group
            pos = pos + group;
            group = group + 1; // Increase group size by 1
        }

        // If this sum is bigger than our best sum so far, update it
        if (sum > best) {
            best = sum;
        }
    }

    // Print the best sum found
    cout << "Maximum sum: " << best;
    return 0;
}
