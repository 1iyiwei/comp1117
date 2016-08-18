#include <iostream>

using namespace std;

struct Node
{
   int data;
   Node * link;
};

void init(Node * & head)
{
   head=NULL;
}

void print(Node *head)
{
   if (head==NULL) return;
   cout << head->data << " ";
   print(head->link);
}

void insert_front(Node * &head, int item)
{
   Node * tmplink = new Node;
   tmplink->data = item;
   tmplink->link = head;
   head = tmplink;
}

int remove_front(Node * & head)
{
    Node *discard = head;
    int item = head->data;
    head = head->link;
    delete discard;
    return item;
    }

bool remove (Node * & head, int item)
{
   if (head==NULL) return false;
   if (head->data==item) 
   {
      Node *tmplink = head;
      head=head->link;
      delete tmplink;
      return true;
   }
   
   if (head->link == NULL) return false;
   Node *tmplink=head;
   
   while ((tmplink->link->link != NULL) && (tmplink->link->data!=item))
      tmplink=tmplink->link;
   
   if (tmplink->link->data == item)
   {
      Node * discard=tmplink->link;
      tmplink->link = discard->link;
      delete discard;
      return true;
   }
   return false;
}
	
int main(void)
{
   Node *A;
   int item, n;

   init(A);
   cin >> n;
   for (int i=0; i<n; i++)
   {
      cin >> item;
      insert_front(A, item);
   }
   print(A);
   cout << endl;

   cout << remove_front(A) << endl;
   cout << remove_front(A) << endl;
   print(A);
   cout << endl;

   cin >> item;
   while (item != -1)
   {
      if (!remove(A,item)) cout << "Item not found" << endl;
      print(A); cout << endl;
      cin >> item;
   }

   return 0;
}


