#include <iostream>
#include "Listarray.h"

using namespace std;

int main(void)
{
   List A;
   int item, n;

   cout << "enter the number of items" << endl;
   cin >> n;

   for (int i=0; i<n; i++) 
   {
       cout << "enter value for item " << i << endl;
      cin >> item;
      A.insert_front(item);
   }
   A.print();
   cout << endl;

   cout << A.remove_front() << endl;
   cout << A.remove_front() << endl;
   A.insert_front(25);
   A.print();
   cout << endl;

   cout << "enter item to remove" << endl;
   cin >> item;
   while (item != -1) 
   {
      if (!A.remove(item)) cout << "Item not found" << endl;
      A.print(); cout << endl;

      cout << "enter item to remove" << endl;
      cin >> item;
   }

   return 0;
}


