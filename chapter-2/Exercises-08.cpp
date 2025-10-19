// ******** QUESTION ******** 
/*
  (Current time) Listing 2.9, ShowCurrentTime.cpp, gives a program that displays the
  current time in GMT. Revise the program so that it prompts the user to enter the time
  zone offset to GMT and displays the time in the specified time zone.
*/

// ******** SOLUTION ******** 

#include<iostream>
#include<ctime>
using namespace std;

int main(){
  int epochSeconds = time(0);
  int offsetHours, offsetSeconds, totalSeconds;
  int secondsInCurrentDay;
  int hour, minutes, seconds;

  cout << "Enter the time zone offset to GMT: ";
  cin >> offsetHours;
  
  offsetSeconds = offsetHours * (60 * 60);
  totalSeconds = epochSeconds + offsetSeconds;
  secondsInCurrentDay = totalSeconds % (24 * 60 * 60);

  hour = secondsInCurrentDay / (60 * 60);
  secondsInCurrentDay = secondsInCurrentDay % (60 * 60);

  minutes = secondsInCurrentDay / 60;
  seconds = secondsInCurrentDay % 60;
  cout << hour<<":"<<minutes<<":"<<seconds;
  return 0;
}