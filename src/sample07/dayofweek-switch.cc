#include <iostream>
#include <string>
using namespace std;


string DayOfWeek( int day ) 
{
  // pre: 0 <= day < 7
  // post: SUN --> "Sunday", MON -->"Monday", ...

  string result;

  switch (day) 
  { // an integral expression; e.g. day is 1
      
  case 0 :
    result = "Sunday";  // case CONSTANT <label>:
    break;  // go to the next statement.
 
  case 1 :
    result = "Monday";
    break;

  case 2 :
    result = "Tuesday";
    break;

  case 3 :
      result = "Wednesday";
       break;

  case 4 : 
      result = "Thursday";
       break;

  case 5 : 
      result = "Friday";
       break;

  case 6 : 
      result = "Saturday";
       break;

  default:  // if all failed
      cout << "out of range!" << endl;
      break;
  }

  // next statement...
  return result;
}

int main(void)
{
  int dayNum;  
  string dayName;
  
  cout << "Enter day (0-6): ";
  cin >> dayNum;  

  if (dayNum < 0 || dayNum > 6)
  {
    cout << "Error!" << endl;
    return 1; 
  }
  
  dayName = DayOfWeek(dayNum);
  
  cout << dayName << endl;    

  return 0;
}

// //  Replace numeric literals by constant variable
// //  
// const int SUN = 0;
// const int MON = 1;
// const int TUE = 2;
// const int WED = 3;
// const int THU = 4;
// const int FRI = 5;
// const int SAT = 6;





