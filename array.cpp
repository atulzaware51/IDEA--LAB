#include <iostream>
using namespace std;

int main() {
    int arr[5];

    // Input array elements
    cout << "Enter 5 array elements: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Display array elements
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Find the sum of array elements
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    cout << "Sum of array elements: " << sum << endl;

    // Find the maximum element
    int max = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Maximum element: " << max << endl;

    return 0;
}
