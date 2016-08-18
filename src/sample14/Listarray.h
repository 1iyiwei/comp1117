#include <iostream>

using namespace std;

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
      static const int MAXSIZE=100;
      static const int NULLLINK=-1;
      int data[MAXSIZE];
      int link[MAXSIZE];
      int head;
      int empty;
};

List::List()
{
   head=NULLLINK;
   empty=0;
   for (int i=0; i<MAXSIZE-1; i++) link[i]=i+1;
   link[MAXSIZE-1]=NULLLINK;
}

List::~List()
{
   return;
}

void List::print() 
{
   int tmplink = head;
   while (tmplink !=NULLLINK) 
   {
     cout << data[tmplink] << " ";
     tmplink = link[tmplink];
   }
}

void List::insert_front(int item)
{
   int tmplink = empty;		// the first empty element
   empty=link[empty];		// update empty list, Assume never full
   data[tmplink]=item;
   link[tmplink] = head;
   head=tmplink;
}

int List::remove_front()
{
   int item=data[head];
   int discard = head;
   head=link[head];
   //insert discarded element into empty list
   link[discard]=empty;
   empty=discard;
   return item;
}

bool List::remove(int item)
{
  if (head==NULLLINK) return false;
  if (data[head]==item)
  {
     int discard = head;
     head=link[head];
     link[discard]=empty;
     empty=discard;
     return true;
  }
  
  if (link[head] == NULLLINK) return false;
  
  int tmplink=head;
  
  while ((link[link[tmplink]]!=NULLLINK) && (data[link[tmplink]]!=item))
      tmplink=link[tmplink];
   
   if (data[link[tmplink]] == item) 
   {
      int discard = link[tmplink];
      link[tmplink]=link[discard];
      link[discard]=empty;
      empty=discard;
      return true;
   }
   return false;
}


