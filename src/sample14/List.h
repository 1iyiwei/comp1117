#include <iostream>

using namespace std;

struct Node 
{
   int data;
   Node * link;
   };

class List 
{
   public:
      List();			// constructor
      ~List();			// destructor
      void print();		// print the list
      void insert_front(int);	// insert an item at the front
      int remove_front();	// remove the first element
      bool remove(int);		// locate and remove
   private:
      Node * head;
};

List::List()
{
   head=NULL;
}

List::~List()
{
   while (head!=NULL) 
   {
      Node * discard=head;
      head=head->link;
      delete discard;
   }
}

void List::print() 
{
   Node * tmplink = head;
   while (tmplink !=NULL) 
   {
     cout << tmplink->data << " ";
     tmplink = tmplink->link;
   }
}

void List::insert_front(int item)
{
   Node * tmplink = new Node;
   tmplink->data=item;
   tmplink->link = head;
   head=tmplink;
}

int List::remove_front()
{
   int item=head->data;
   Node * discard = head;
   head=head->link;
   delete discard;
   return item;
}

bool List::remove(int item)
{
  if (head==NULL) return false;
  if (head->data==item) 
  {
     Node *discard = head;
     head=head->link;
     delete discard;
     return true;
  }
  
  if (head->link == NULL) return false;
   Node * tmplink=head;
  
   while ((tmplink->link->link!=NULL) && (tmplink->link->data!=item))
      tmplink=tmplink->link;
   
   if (tmplink->link->data == item)
   {
      Node * discard = tmplink->link;
      tmplink->link=discard->link;
      delete discard;
      return true;
   }

   return false;
}


