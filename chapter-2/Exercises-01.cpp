// ******** QUESTION ******** 
/*
(Convert Celsius to Fahrenheit) Write a program that reads a Celsius degree in a double value from the console,
then converts it to Fahrenheit and displays the result. The formula for the conversion is as follows:
fahrenheit = (9 / 5) * celsius + 32
*/

// ******** SOLUTION ******** 

#include<iostream>
using namespace std;

int main(){
  double celsius;
  double fahrenheit;
  // step-1: read the celsius value from user
  cout << "Enter Tempreature in Celsius degree = ";
  cin >> celsius;
  // step-2: calculate value in fahrenheit
  fahrenheit = (9.0 / 5) * celsius + 32;
  // step-3: print value in console
  cout << celsius << " Celsius is " << fahrenheit << " Fahrenheit";
  return 0;
}