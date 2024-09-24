//LAB TASK 03 - PROGRAM O3 - DSA
#include <iostream>
using namespace std;

int main() {
    cout << "*********************************************" << endl;
    cout << "*  RIPHAH International University I14 Campus Islamabad  *" << endl;
    cout << "*         Data Structures and Algorithms Lab Task         *" << endl;
    cout << "*********************************************" << endl;
    cout << endl;

    cout << "               -- Program 03 --               " << endl;
    cout << endl;

    int arraySize;
    cout << "Enter the size of the array: ";
    cin >> arraySize;

    int arrayValues[arraySize];
    cout << "---------------------------------------------" << endl;
    for (int i = 0; i < arraySize; i++) {
        cout << "Enter value for element [" << i << "]: ";
        cin >> arrayValues[i];
    }

    cout << "---------------------------------------------" << endl;
    int arrayIndex;
    cout << "Enter the index at which you want to update the value: ";
    cin >> arrayIndex;

    if (arrayIndex < 0 || arrayIndex >= arraySize) {
        cout << "Error: Index out of range! Please try again." << endl;
    } else {
        int newValue;
        cout << "Enter the new value for index [" << arrayIndex << "]: ";
        cin >> newValue;
        arrayValues[arrayIndex] = newValue;

        cout << endl;
        cout << "---------------------------------------------" << endl;
        cout << "Value at index [" << arrayIndex << "] has been updated successfully!" << endl;
        cout << "New value: " << newValue << endl;
        cout << endl;

        cout << "Updated array: ";
        for (int i = 0; i < arraySize; i++) {
            cout << arrayValues[i] << " ";
        }
        cout << endl;
        cout << "---------------------------------------------" << endl;
    }

    return 0;
}
