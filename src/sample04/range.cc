// This program illustrates a common problem of
// using the comparsion operators.
//
// Write a program to take a score (0-100) and print
// the corresponding grade using the following conversion.
//
// 85-100 => A, 75-84 => B, 65-74 => C, 50-64 => D, 0-49 => F

// The program can be compiled without any error/warning messages!

#include <iostream>
#include <string>

int main(void)
{
  using namespace std;

  cout << "Enter the score (0-100): ";
  int score;
  cin >> score;

  string grade;

  if (0 <= score < 50)
    grade = "F";
  if (50 <= score < 65)
    grade = "D";
  if (65 <= score < 75)
    grade = "C";
  if (75 <= score < 85)
    grade = "B";
  if (85 <= score <= 100)
    grade = "A";

  cout << "Grade: " << grade << endl;

  return 0;
}

