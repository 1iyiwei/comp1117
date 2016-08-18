#include <iostream>
#include <string>
using namespace std;

int main(void)
{
  string first;
  string second;

  cout << "enter two strings" << endl;

  cin >> first >> second;  // ant zebra

  if (first < second)
      cout << first << " < " << second << endl;
  else if (first > second)
      cout << first << " > " << second << endl;
  else
      cout << first << " == " << second << endl;

  return 0;
}

// cin ignores all the "white-space" characters
// white-space characters: space, tab, newline

// "ant" < "zebra"?
// How about "ant" and "Zebra"?

