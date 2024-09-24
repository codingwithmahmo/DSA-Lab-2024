//Lab task 01 - Data Structures and Algorithms - Program 02

#include<iostream>
using namespace std;
int main()
{
    cout<<"RIPHAH International University I14 Campus Islamabad"<<endl;
    cout<<"LAB TASK 03- PROGRAM 02 "<<endl;
    cout<<"Welcome to the Program!"<<endl;

    int numberArray[] = {1,2,3,4,5,6,7,8,9,10};
    int searchNumber;
    cout<<"Enter search number: ";
    cin>>searchNumber;

    bool conditionState = false;
    int arraySize = sizeof(numberArray)/sizeof(numberArray[0]);
    for(int i=0; i<arraySize; i++)
    {
        if(searchNumber == numberArray[i])
        {
            conditionState = true;
            cout<<"Number was successfully identified at index "<<i<<endl;
            break;
        }
    }

    if(!conditionState)
    {
        cout<<"Number was not found in array"<<endl;
    }

    return 0;

}

