// ******** QUESTION ******** 
/*
  (Convert feet into meters) Write a program that reads a number in feet, converts it to
  meters, and displays the result. One foot is 0.305 meter.
*/

// ******** SOLUTION ******** 

#include<iostream>
using namespace std;

int main(){
  double feet, meters;
  

  cout << "Enter a value for feet: ";
  cin >> feet;
  
  meters = 0.305 * feet;

  cout << feet << " feet is " << meters << " metters" <<endl;

  return 0;
}