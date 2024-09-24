#include<iostream>
using namespace std;
//defining structure for a node
struct Node
{
    int dataSize; //size shall be declared by the user
    int data; //this is the data we want to store
    Node* next; //Pointer to the next node
};

//function in order to insert a node at the beginning
void insertAtBegin(Node** head, int newData)
{
        //allocate memory for new node
        Node* newNode = new Node();
        //assign data to new node
        newNode->data = newData;
        //make next of new node point to the current head
        newNode->next = *head;
        //move the head to point the new node
        *head = newNode;
}

//function to insert element at the end of the list
void insertAtEnd(Node** head, int newData)
{
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = NULL;

    if(*head == NULL)
    {
        *head =  newNode;
        return;
    }
}

void printList(Node* node)
{
    while(node!=nullptr) {
        cout << node->data << "  ";
        node = node->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    Node* head = nullptr;
    int n,value;
    cout<<"How many elements do you want in the linked list? ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<endl;
        cin>>value;
        insertAtBegin(&head,value);

    }
    //used this part of the code to print the linked list
    cout<<"Linked List: "<<endl;
    printList(head);
    return 0;
}

