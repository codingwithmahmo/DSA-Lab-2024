#include<iostream>
using namespace std;
int main()
{
    int arraySize = 6;
    int* arrayValues=new int[arraySize];

    cout<<"Enter"<<arraySize<<" numbers"<<endl;
    for(int i=0;i<arraySize;i++)
    {
        cout<<"Number "<<i+1<<endl;
        cin>>arrayValues[i];
    }

    bool isPalindrome = true;
    for(int i=0;i<arraySize/2;i++)
    {
        if(arrayValues[i]!= arrayValues[arraySize - 1 - i])
        {
            isPalindrome = false;
            break;
        }
    }
    if(isPalindrome)
    {
        cout<<"Array is a Palindrome!"<<endl;
    }
    else
    {
        cout<<"The array is not a Palindrome!"<<endl;
    }

    delete[] arrayValues;
    return 0;
}