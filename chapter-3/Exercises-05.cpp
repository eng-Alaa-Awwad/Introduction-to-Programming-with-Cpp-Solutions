// ******** QUESTION ******** 
/*
(Find future dates) Write a program that prompts the user to enter an integer for
today’s day of the week (Sunday is 0, Monday is 1, . . . , and Saturday is 6). Also,
prompt the user to enter the number of days after today for a future day and display
the future day of the week.
*/

// ******** SOLUTION ******** 
#include<iostream>
using namespace std;

int main(){
  int currentDay;
  int elapsedValue;
  int futureDay;
  cout << "Enter today's day: ";
  cin >> currentDay;

  cout << "Enter the number of days elapsed since today: ";
  cin >> elapsedValue;

  futureDay = (currentDay + elapsedValue) % 7;

    cout << "Today is ";
    switch (currentDay) {
        case 0: cout << "Sunday"; break;
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
        default: cout << "Invalid day";
    }

    cout << " and the future day is ";
    switch (futureDay) {
        case 0: cout << "Sunday"; break;
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
    }
    cout << endl;
  return 0;
}