//program 01 Lab Task 05
//Data Structures and Algorithms
//Mahmood Khan 56067 - Bachelor of Science in Software Engineering

#include <iostream>
using namespace std;

// Define the structure for a node
struct Node {
    int data;   // Data to store
    Node* next; // Pointer to the next node
};

// Function to insert a node at the end
void insertAtEnd(Node** head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    Node* last = *head;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = newNode;
}

// Function to delete a node by value
void deleteNode(Node** head, int key) {
    if (*head == NULL) {
        cout << "The list is empty. No node to delete." << endl;
        return;
    }

    Node* temp = *head;
    Node* prev = NULL;

    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        delete temp;
        return;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Value not found in the list" << endl;
        return;
    }

    prev->next = temp->next;
    delete temp;
}

// Function to print the Linked List
void printList(Node* node) {
    if (node == nullptr) {
        cout << "The list is empty." << endl;
        return;
    }

    while (node != nullptr) {
        cout << node->data << "->";
        node = node->next;
    }
    cout << "NULL" << endl;
}

// Function to search for a node by value
bool searchNode(Node* head, int key) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == key) {
            return true; // Value found
        }
        current = current->next;
    }
    return false; // Value not found
}

int main() {
    // ASCII banner with proper formatting
    cout<<"----------xxxxxxxxxxxxxxxx-------------"<<endl;
    cout<<"LAB TASK 05 - PROGRAM 01"<<endl;
    cout<<"DATA STRUCTURES AND ALOGORITHMS"<<endl;
    cout<<"----------xxxxxxxxxxxxxxxx-------------"<<endl;
    Node* head = nullptr;

    int n, values, deleteValue, s;
    cout << "\nEnter the number of Nodes you want in the linked list: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value of Node " << i + 1<<":";
        cin >> values;
        insertAtEnd(&head, values);
    }

    // Printing linked list
    cout << "Linked List: ";
    printList(head);

    // Entering value to delete
    cout << "Enter the value of the node to be deleted: ";
    cin >> deleteValue;

    // Delete the node with the specified value
    deleteNode(&head, deleteValue);

    // Print the linked list after deletion
    cout << "The Linked List after deletion is: ";
    printList(head);

    // Entering value to Search
    cout << "Enter the value to search in the linked list: ";
    cin >> s;

    // Search for the entered value
    if (searchNode(head, s))
    {
        cout << "Value " << s << " found in the linked list." << endl;
    }
    else
    {
        cout << "Value " << s << " not found in the linked list." << endl;
    }

    return 0;
}
