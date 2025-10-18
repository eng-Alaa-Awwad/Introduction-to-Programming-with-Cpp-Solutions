// ******** QUESTION ******** 
/*
(Average sales in grams) Assume a vendor sells 6 kilograms of grocery in 15 minutes and
30 minutes and 30 seconds. Write a program that displays the average sale in grams
per hour (Note that 1 kilogram is 1000 grams).
*/

// ******** SOLUTION ******** 

#include<iostream>
#include<cmath>
using namespace std;

int main(){
  double timeInHour = (15.0/60) + (30.0/60) + (30.0/3600);
  int amountInGrams = 6 * 1000;
  double average = amountInGrams / timeInHour; 
  cout << "The Average sales in grams = " << average  << " g/h"; 
  return 0;
}


// ******** NOTE ********
// In C++, dividing two integers (like 30/60) gives an integer result (0).
// To get a decimal (floating-point) result, use 30.0/60.0 or make one number a double.
// Later, you’ll learn more about data types and type casting.
