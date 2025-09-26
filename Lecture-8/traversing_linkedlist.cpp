#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    int n;
    cout << "Enter number of nodes you want in the linked list: ";
    cin >> n;

    Node* head = NULL;
    Node* temp = NULL;
    Node* newNode = NULL;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        newNode = new Node();   
        cin >> newNode->data;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;  
            temp = newNode;
        } else {
            temp->next = newNode;  
            temp = newNode;
        }
    }

    cout << "Linked List elements: ";
    Node* ptr = head; 
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;

    return 0;
}
