#include <iostream>
#include <string>

// ASCII code

int main(){
  using namespace std;

  string first;
  string second;

  cin >> first >> second;  // ant zebra

  if ("zebra" < "ant") // string literals
    // cannot be compared directly
    // BUT, it's a valid expression in the language!!!!
    // It's not what we want!!!
    // we can't explain this at this moment.
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  if (first < second)
     cout << first << " is \"less than\" " << second << endl;
  else if (first > second)
    cout << first << " is \"greater than\" " << second << endl;
  else
    cout << "They are the same!" << endl;

  return 0;
}

// cin ignores all the "white-space" characters
// white-space characters: space, tab, newline

// "ant" < "zebra"?
// How about "ant" and "Zebra"?

