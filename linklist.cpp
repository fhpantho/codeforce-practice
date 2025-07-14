#include <iostream>
using namespace std;
class Node 
{
    public:
    int data;
    Node* next;
    Node(int value) 
    {

        data = value;
        next = NULL;
    }

};

class List
{

    
    public:
    Node *head;
    Node *tail;
    List()
    {
        head = tail = NULL;
    }

    void push_front(int val)
    {
        Node* new_node = new Node(val);
        if(head == NULL){
            head = tail = new_node;
            return;
        }
        else
        {
            new_node-> next = head;
            head = new_node;
        }
    }
    void push_back(int val)
    {
        Node* new_node = new Node(val);
        if(head == NULL){
            head = tail = new_node;
            return;
        }
        else
        {
            tail-> next = new_node;
            tail = new_node;
        }
    }
    void print_list()
    {
        Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    }

};

int main()
{
    // Declare a linked list
    List myList;

    // Add elements to the linked list
    myList.push_front(10);
    myList.push_back(20);
    myList.push_front(5);

    // The linked list now contains: 5 -> 10 -> 20

    return 0;
}