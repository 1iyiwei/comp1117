#include <iostream>
#include "Counter.hpp"
using namespace std;

int main(void)	
{		
    int x(10);
    Counter a_counter, b_counter(100);

    //initialize counter values	
    // a_counter.initialize();		
    // b_counter.initialize();

    //Test various functions
    for(int i=0; i<10; i++) 
    {
        bool success = a_counter.increment();
        if(! success) cout << "cannot increment" << endl;

        cout << "a_counter = " << a_counter.value() << endl;
    }
      		
    for(int i=5; i>0; i--) 
    {
        bool success = b_counter.decrement();
        if(! success) cout << "cannot decrement" << endl;
        
        cout << "b_counter = " << b_counter.value() << endl;
    }
    
    //Print result
    cout << "The final value of a_counter = " << a_counter.value() << endl;
    cout << "The final value of b_counter = " << b_counter.value() << endl;

    return 0;	
}

