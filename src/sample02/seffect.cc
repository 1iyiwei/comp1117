//This program illustrates the usage of escape sequences 

#include <iostream>
#include <stdlib.h>

int main(void)
{
    using namespace std;
    cout<<"x";					 	
    cout<<"x\n";							
    cout<<"\\x\n";	
    cout<<"\"x\n";
    cout<<"\tx\n";
    cout<<"\nx\n";		
    
    return 0;
}

//output screen for the above program:
// ===================================
// xx
// \x
// "x
// 		x
//
// x
//
// ====================================
// and you should hear a "beep" sound.




