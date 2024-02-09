#include "Header.h"

void readFromArray(const string& fileName) {
    ifstream inputFile("A1input.txt");
    if (!inputFile.is_open()) {
        throw runtime_error("Error Opening File");
    }

    for (int i = 0; i < arraySize; i++) {
        if (!(inputFile >> dataArray[i])) {
            throw runtime_error("Error Reading from File");
        }
    }

    inputFile.close();
};



    int main() {
        try {
            readFromArray("A1input.txt");

        // Display the original array
        cout << "Original Array: ";
        for (int i = 0; i < arraySize; ++i) {
            cout << dataArray[i] << " ";
        }
        cout << endl;

        // Get the new element from the user
        int newValue;
        cout << "Enter the number to be added at the end: ";
        cin >> newValue;

        // Expand the array by creating a new one
        const int newSize = arraySize + 1;
        int* newArray = new int[newSize];

        // Copy elements from the original array to the new array
        for (int i = 0; i < arraySize; ++i) {
            newArray[i] = dataArray[i];
        }

        // Add the new element at the end
        newArray[newSize - 1] = newValue;

        // Display the updated array
        cout << "Updated Array: ";
        for (int i = 0; i < newSize; ++i) {
            cout << newArray[i] << " ";
        }
        cout << endl;

        // Free the memory of the old array
        delete[] newArray;
    }
    catch (const exception& e) {
        cout << "Caught:  " << e.what() << endl; 
        return 1;
    }
    return 0;
}