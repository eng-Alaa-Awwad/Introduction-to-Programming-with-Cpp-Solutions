// ******** QUESTION ******** 
/*
  (Physics: finding runway length) Given an airplane’s acceleration a and take-off
  speed v, you can compute the minimum runway length needed for an airplane to take
  off using the following formula:
  length =(v^2) / 2a
  Write a program that prompts the user to enter v in meters/second (m/s) and the acceleration
  a in meters/second squared (m/s^2), and displays the minimum runway length.
*/

// ******** SOLUTION ******** 

#include<iostream>
#include<cmath>
using namespace std;

int main(){
  double acceleration, speed , length;

  cout << "Enter speed and acceleration: ";
  cin >> speed >> acceleration;

  length = pow(speed,2.0) / (2*acceleration);

  cout << "The minimum runway length for this airplane is " << length;
  
  return 0;
}