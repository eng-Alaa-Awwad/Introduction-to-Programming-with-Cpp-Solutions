// ******** QUESTION ******** 
/*
  (Find the number of years) Write a program that prompts the user to enter the minutes
  (e.g., 1 billion), and displays the number of years and days for the minutes. For
  simplicity, assume a year has 365 days.
*/

// ******** SOLUTION ******** 

#include<iostream>
using namespace std;

int main(){
  int minutes,years,days;

  cout << "Enter the number of minutes: ";
  cin >> minutes;

  years = minutes / (365 * 24 * 60);
  int remainMinutes = minutes % (365 * 24 * 60);
  days = remainMinutes / (24 * 60);

  cout << minutes << " minutes is approximately " << years << " years and " << days << " days";
  return 0;
}