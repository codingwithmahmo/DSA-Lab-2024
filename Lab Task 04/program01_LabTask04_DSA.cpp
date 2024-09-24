#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    
    for (int i = 0; i < size; i++) 
	{
        if (arr[i] == target) 
		{
            return i;
        }
    }
    return -1;
}

int main() 
{
    int size, target;
    cout<<"-----------------------------------------------"<<endl;
	cout<<"Program written by Mahmood Khan, BSSE 3-2, 56067"<<endl;
	cout<<"------------------------------------------------"<<endl;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    
    for (int i = 0; i < size; i++) 
	{
		cout<<"Enter element: ";
        cin >> arr[i];
    }

    cout << "Enter the target element: ";
    cin >> target;

    int result = linearSearch(arr, size, target);

    if (result != -1) 
	{
        cout << "Element found at index: " << result << endl;
    } 
	else 
	{
        cout << "Element not found in the array." << endl;
    }

    return 0;
}

