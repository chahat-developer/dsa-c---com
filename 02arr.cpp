#include <iostream>
#include <climits> // Required for INT_MIN
using namespace std;

// Function to find the maximum value in an array
int getMax(int num[], int size) {
    // Initialize with the smallest possible integer value 
    // to ensure the first element is correctly considered.
    int max_val = INT_MIN; 

    // Use the correct 'size' parameter for the loop condition
    for (int i = 0; i < size; i++) {
        // Compare current element with the current maximum
        if (num[i] > max_val) {
            max_val = num[i];
        }
    }

    // Return the final maximum value
    return max_val;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // Added a safeguard for array size limit
    if (size > 100) size = 100;

    int num[100]; 

    cout << "Enter the elements of the array: ";
    // Taking input in array
    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }
    
    // Call the corrected function
    cout << "Maximum value is " << getMax(num, size) << endl;
    return 0;
}
