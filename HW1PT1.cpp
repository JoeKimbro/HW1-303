#include "Header.h"
// Reading the Input File
void readFromArray(const string& fileName) {
    ifstream inputFile("A1input.txt");
    if (!inputFile.is_open()) {
        cout << "Error opening file" << endl;
        return;
    }

    for (int i = 0; i < Arr_size; i++) {
        if (!(inputFile >> dataArray[i])) {
            cout << "Error reading from file" << endl;
            break;
        }
    }

    inputFile.close();
};

int findIndexInArr(int dataArray[], int num) {
    int pos = -1;
    // Looking up the index position...
    for (int i = 0; i < Arr_size; i++) {
        if (dataArray[i] == num) {
            pos = i;
            break;

        }

    }
    return pos;
    
}

int main()
{
    readFromArray("A1input.txt");
    cout << "Original Array: ";
    for (int i = 0; i < Arr_size; ++i) {
        cout << dataArray[i] << " ";
    }
    cout << endl;
    int num;
    // User inputs the number to find 
    cout << "Enter Array Element: \n";
    cin >> num;
    // Display the original array
   int pos = findIndexInArr(dataArray, num);
    // Just in case number isn't in the array...
    if (pos != -1) {
        cout << "Number Found at Index \n" << pos;
    }
    else {
        cout << "Number not found in the array." << endl;
    }
    return 0;
}