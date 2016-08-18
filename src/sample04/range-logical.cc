// This program solves the problem of range.cc using logical operators.
//
// Write a program to take a score (0-100) and print
// the corresponding grade using the following conversion.
//
// 85-100 => A, 75-84 => B, 65-74 => C, 50-64 => D, 0-49 => F


#include <iostream>
#include <string>

int main(void)
{
  using namespace std;

  cout << "Enter the score (0-100): ";
  int score;
  cin >> score;

  string grade;

  if (0 <= score && score < 50)
    grade = "F";
  if (50 <= score && score < 65)
    grade = "D";
  if (65 <= score && score < 75)
    grade = "C";
  if (75 <= score && score < 85)
    grade = "B";
  if (85 <= score && score <= 100)
    grade = "A";

  cout << "Grade: " << grade << endl;

  return 0;
}

// The program can further be improved using cascading
// if/else statement.

