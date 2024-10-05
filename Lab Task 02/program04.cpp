//Lab TASK 03 - DSA - Program 04
#include<iostream>
using namespace std;
int main()
{
    cout << "*********************************************" << endl;
    cout << "*  RIPHAH International University I14 Campus Islamabad  *" << endl;
    cout << "*         Data Structures and Algorithms Lab Task         *" << endl;
    cout << "*********************************************" << endl;
    cout << endl;

    cout << "               -- Program 04 --               " << endl;
    cout << endl;

    int arraySize;
    cout<<"Enter size of the array: ";
    cin>>arraySize;

    if(arraySize<=0)
    {
        cout<<"Error! Array size should be positive!"<<endl;
    }

    int arrayValues[arraySize];
    for(int i=0;i<arraySize;i++)
    {
        cout<<"Enter a number: ";
        cin>>arrayValues[i];
    }

    int arrayIndex;
    cout<<"Enter the index of the element that needs deletion:";
    cin>>arrayIndex;

    if(arrayIndex<0 || arrayIndex>=arraySize)
    {
        cout<<"Index is out of range! Please try again!"<<endl;
    }
    else
    {
        for(int i=arrayIndex;i<arraySize;i++)
        {
            arrayValues[i]=arrayValues[i+1];
        }
        cout<<"Element has been deleted!"<<endl;
        arraySize = arraySize-1;
    }

    cout<<"Updated array after operations: "<<endl;
    for(int i=0;i<arraySize;i++) {
        cout<<arrayValues[i]<<" ";
    }
}
