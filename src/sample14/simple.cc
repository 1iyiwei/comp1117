#include <iostream>
using namespace std;

// node for linked list
struct Node
{
    int data;
    Node *next;
};

int main(void)
{
    int num_elements = 0;

    cout << "enter number of elements" << endl;
    cin >> num_elements;

    // allocating memory for array
    int *foo = 0;
    foo = new int[num_elements];

    // allocating memory for linked list

    Node *head = new Node;
    head->next = 0;
    Node *tail = head;
    for(int i = 1; i < num_elements; i++)
    {
        Node *new_node = new Node;
        new_node->next = 0;

        tail->next = new_node;
        tail = new_node;
    }

    cout << "enter the values" << endl;
    for(Node * i = head; i != 0; i = i->next)
    {
        cin >> i->data;
    }

/*
    for(int i =0; i < num_elements; i++)
    {
        cin >> foo[i];
        
    }
*/

    cout << "here it is:" << endl;
    for(Node *i = head; i != 0; i = i->next)
    {
        cout << " " << i->data;
    }
/*
    for(int i = 0; i < num_elements; i++)
    {
        cout << " " << foo[i];
    }
    cout << endl;
*/
    delete[] foo;

    // done
    return 0;
}


