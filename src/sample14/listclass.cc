#include <iostream>
#include "List.h"

using namespace std;

int main(void)
{
   List A;
   int item, n;

   cin >> n;
   for (int i=0; i<n; i++) 
   {
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

   cin >> item;
   while (item != -1) 
   {
      if (!A.remove(item)) cout << "Item not found" << endl;
      A.print(); cout << endl;
      cin >> item;
   }

   return 0;
}


