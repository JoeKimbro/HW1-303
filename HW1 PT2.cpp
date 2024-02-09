#include "Header.h"
// Read the input file...
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

int main()
{
    readFromArray("A1input.txt");
    int oldval, arraypos; //declaring important var
    // Display the original array...
    cout << "Original Array: ";
    for (int i = 0; i < arraySize; ++i) {
        cout << dataArray[i] << " ";
    }
    cout << endl;
    // in case the position is out of range...
    try {
        // user inputs the positon they want to change
        cout << "Enter Array Postion to Change \n";
        cin >> arraypos;
        if (arraypos < 0 || arraypos >= 100) {
            throw out_of_range("Position of Index is Out of Range");
        }

        oldval = dataArray[arraypos];
        cout << "Current Value: \n" << oldval; //current value of the positon they want to change
        cout << "\nEnter New Value For The Old Value of Given Position: ";
        cin >> dataArray[arraypos];
        cout << "New Value Of The Position \n" << dataArray[arraypos]; // old value is replaced
        cout << "\nNew Array is: ";
        for (int i = 0; i < 100; i++) {
            cout << " " << dataArray[i];
        }
        cout << endl;

    }
    catch (const out_of_range& e) {
        cout << "Error: " << e.what() << endl;
    }

    catch (...) {
        cout << "Error Has Occurred." << endl;
    }
    return 0;

}