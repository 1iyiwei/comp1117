#include <iostream>
using namespace std;

int monthday_if(int month)
{
  int days = 0;
  
  if(month == 2) 
    days = 28;
  else if (month == 4 || month == 6 || month == 9 || month== 11)
    days = 30;
  else 
    days = 31;

  return days;
}

int monthday(int month)
{
  // pre:  1 <= month <= 12
  // post: return number of days of a particular month

  int num_of_days = 0;

  switch(month) 
  {      // switch ( expr )
  default : 
      num_of_days = 31;
      break;

  case 4  :  case 6  :  case 9  :  case 11 : 
      num_of_days = 30;
      break;

  case 2  : num_of_days = 28;  // assume non-leap year
    break;
  }
  
  return num_of_days;
}
    
int main(void)
{
  int WhichMonth;
    
  cout << "Enter a month (1, 2, ... 12): ";
  cin >> WhichMonth;
    
  // 30 days hath september, april, june, and november

  cout << WhichMonth << " has " << monthday( WhichMonth ) << " days" << endl;
    
  return 0;
}


// 1) Replace the numeric literals representing months by symbolic constants.
// 2) Modify the program to use enum type instead of constants.

// const int JAN = 1;
// const int FEB = 2;
// // ...
// const int DEC = 12;
