#ifndef _LIST_HPP
#define _LIST_HPP

#include <vector>
using namespace std;

struct Node
{
    Node(void);
    Node(const int value);

    int data;
    struct Node * next;
};

Node::Node(void) : data(0), next(0)
{
    // nothing else to do
}

Node::Node(const int value) : data(value), next(0)
{
    // nothing else to do
}

class List 
{
public:
    List(void);	
    ~List(void);
		
    bool empty(void) const;

    int length(void) const;

    vector<int> values(void) const;

    void insert_front(const int value);

    // remove front element and return its value
    bool remove_front(int & value); 

    // locate and remove
    bool remove(const int value);
   
    void clear(void);

private:
    Node * head;
};

List::List(void): head(0)
{
    // nothing else to do
}

List::~List(void)
{
    clear();
}

bool List::empty(void) const
{
    return (head == 0);
}

int List::length(void) const
{
    int answer = 0;

    Node * tmplink = head;
    while(tmplink != 0) 
    {
        answer++;
        tmplink = tmplink->next;
    }

    return answer;
}

vector<int> List::values(void) const
{
    vector<int> answer;

    Node * tmplink = head;
    while (tmplink != 0) 
    {
        answer.push_back(tmplink->data);
        tmplink = tmplink->next;
    }

    return answer;
}

void List::insert_front(int item)
{
    Node * tmplink = new Node;
    tmplink->data = item;
    tmplink->next = head;
    head = tmplink;
}

bool List::remove_front(int & value)
{
    if(head == 0)
    {
        return false;
    }
    else
    {
        value = head->data;
        Node * discard = head;
        head = head->next;
        delete discard;

        return true;
    }
}

bool List::remove(const int item)
{
    if(head == 0) return false;

    if(head->data == item) 
    {
        Node *discard = head;
        head = head->next;
        delete discard;
        return true;
    }
  
    if(head->next == 0) return false;

    Node * tmplink = head;
  
    while((tmplink->next->next!=0) && (tmplink->next->data!=item))
    {
        tmplink=tmplink->next;
    }

    if(tmplink->next->data == item)
    {
        Node * discard = tmplink->next;
        tmplink->next=discard->next;
        delete discard;
        return true;
    }

    return false;
}

void List::clear(void)
{ 
    Node * tmplink = head;

    while(tmplink != 0) 
    {
        Node * discard = tmplink;
        tmplink = tmplink->next;
        delete discard;
    }

    head = 0;
}

#endif
