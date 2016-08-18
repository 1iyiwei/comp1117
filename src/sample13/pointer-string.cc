#include <iostream>
#include <string>
using namespace std;

int main(void)
{
  string MyName ("Markus");
  string * sptr = & MyName;

  cout << "*sptr : " << *sptr  // "Markus"
       << "\t(*sptr).length() : " << (*sptr).length() << endl; // 6

  (*sptr)[3] = 'c';  // MyName[3] = 'c'
  cout << "*sptr : " << *sptr  << MyName   // Marcus
       << "\tsptr->length() : "  << sptr->length() << endl;  // 6

  cout << "(*sptr).substr(1,3) : " << (*sptr).substr(1,3) << endl; // "arc"
  cout << "sptr->substr(2) : " << sptr->substr(2) << endl;  // "rcus"

  return 0;
}

// ptr->field <====>  (*ptr).field
// ptr->function() <===> (*ptr).function() 

