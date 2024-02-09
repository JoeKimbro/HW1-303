#include "HW1PT4.h"

void readFromArray(const string& fileName) {
    ifstream inputFile("A1input.txt");
    if (!inputFile.is_open()) {
        cout << "Error opening file" << endl;
        return;
    }

    for (int i = 0; i < arraySize; i++) {
        if (!(inputFile >> dataArray[i])) {
            cout << "Error reading from file" << endl;
            break;
        }
    }

    inputFile.close();
};

void replaceAtIndex(int index, bool remove) {
    int array();
    if (index >= 0 && index < arraySize) {
        if (remove) {
            // If removing, shift elements to the left to fill the gap
            for (int i = index; i < arraySize - 1; ++i) {
                dataArray[i] = dataArray[i + 1];
            }
            dataArray[arraySize - 1] = 0; // Set the last element to 0
        }
        else {
            // If not removing, replace the value with 0
            dataArray[index] = 0;
        }
    }
    else {
        cout << "Invalid index." << endl;
    }
}

int main() {
    readFromArray("A1input.txt");
    // Display the original array
    cout << "Original Array: ";
    for (int i = 0; i < arraySize; ++i) {
        cout << dataArray[i] << " ";
    }
    cout << endl;

    // Get user input for index and removal option
    int index;
    bool remove;
    cout << "Enter the index to replace: ";
    cin >> index;
    cout << "Remove the integer at the index? (1 for yes, 0 for no): ";
    cin >> remove;

    // Replace or remove the value at the specified index
    replaceAtIndex(index, remove);

    // Display the updated array
    cout << "Updated Array: ";
    for (int i = 0; i < arraySize; ++i) {
        cout << dataArray[i] << " ";
    }
    cout << endl;

    return 0;
}