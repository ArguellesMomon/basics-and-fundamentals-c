#include <iostream>
using namespace std;

int main() {
    
    int arr1[10], arr2[10], mergedArr[20];
    int size1, size2, mergedSize;

    // Input for array 1
        cout<< "Hello, this is a merger and descending organizing app!\n" <<endl;
        cout << "Enter the number of elements for array 1 (up to 10): ";
        cin >> size1;
    // Makes sure that the size will not be higher than 10
    while (size1 < 1 || size1 > 10) {
        cout << "Invalid input. Please enter a number between 1 and 10: ";
        cin >> size1;
    }
    for (int i = 0; i < size1; i++) {
        cout << "Enter element " << i + 1 << " for array 1: ";
        cin >> arr1[i];
    }

    // Input for array 2
        cout << "Enter the number of elements for array 2 (up to 10): ";
        cin >> size2;

    // Makes sure that the size will not be higher than 10 
    while (size2 < 1 || size2 > 10) {
        cout << "Invalid input. Enter a number between 1 and 10: ";
        cin >> size2;
    }
    for (int i = 0; i < size2; i++) {
        cout << "Enter element " << i + 1 << " for array 2: ";
        cin >> arr2[i];
    }

    // This merges the two arrays
    mergedSize = size1 + size2;
    for (int i = 0; i < size1; i++) {
        mergedArr[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        mergedArr[size1 + i] = arr2[i];
    }

    // Sorting the merged array in descending order
    for (int i = 0; i < mergedSize - 1; i++) {
        int maxIndex = i;
        // Find the maximum element in the unsorted portion
        for (int j = i + 1; j < mergedSize; j++) {
            if (mergedArr[j] > mergedArr[maxIndex]) {
                maxIndex = j;
            }
        }
        // Insert the highest element directly into its correct position
        int maxValue = mergedArr[maxIndex];
        // Moves elements to the right to make space for the highest inputted element
        for (int j = maxIndex; j > i; j--) {
            mergedArr[j] = mergedArr[j - 1];
        }
        // Place the maximum value at the correct position
        mergedArr[i] = maxValue;
    }
    system ("cls");
    // Displaying the merged array in descending order
        cout << "The merged array in descending order: ";
    for (int i = 0; i < mergedSize; i++) {
        cout << mergedArr[i] << " ";
    }
        cout << endl;
        cout<<"\nThank you for using our app!";

    return 0;
}
